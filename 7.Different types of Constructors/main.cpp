#include <iostream>
using namespace std;

class complexNumber
{
    int real,img;
  
  public :
    complexNumber()                             // Default Constructors
    {
        this->real = 10;
        this->img = 10;
    }
    complexNumber(int real, int img)            // Parametrized Constructors
    {
        this->real = real;
        this->img = img;
    }
    complexNumber(complexNumber &A)             // Copy Constructors
    {
        this->real = A.real;
        this->img = A.img;
    }

    void input()
    {
        cin >> this->real 
            >> this->img;
    }

    void display()
    {
        cout << this->real << " + "
             << this->img << "i" << endl;
    }

    complexNumber add(complexNumber a)
    {
        complexNumber ans;
        ans.real = a.real + this->real;
        ans.img = a.img + this->img;
        return ans;
    }

    complexNumber substract(complexNumber a)
    {
        complexNumber ans;
        ans.real = this->real - a.real;
        ans.img = this->img - a.img;
        return ans;
    }
};

int main(void)
{
    complexNumber a;            // this will call the default constructor
    a.input();

    int x,y;
    cin >> x >> y;
    complexNumber b(x,y);       // this will call the parametrized constructor

    complexNumber c(b);         // this will copy constructor (copying contents of b to c)         
    c.display();
    cout << endl << endl;

    c = a.add(b);
    cout << "The addition is:- ";
    c.display();

    c = a.substract(b);
    cout << "The substraction is:- ";
    c.display();

    return 0;
}
