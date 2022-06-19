//      15 Jun 2022
//      Yuvraj Kumar
//      2021 IMG-066


// Cpp program to implement functions of Complex Number using operator overloading

#include <iostream>
using namespace std;

class complexNumber
{
    int real,imaginary; 

  public :
    complexNumber()                             // Default Constructors
    {
        this->real = 0;
        this->imaginary = 0;
    }
    complexNumber(int real, int imaginary)            // Parametrized Constructors
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    complexNumber(complexNumber &A)             // Copy Constructor
    {
        this->real = A.real;
        this->imaginary = A.imaginary;
    }

    void input()                                //Taking Input
    {
        cin >> this->real 
            >> this->imaginary;
    }

    void display()                              //Displaying Output
    {
        cout << this->real << " + "
             << this->imaginary << "i" << endl;
    }

    complexNumber operator +(complexNumber &a)  //Addition of two complex numbers
    {
        complexNumber ans;
        ans.real = a.real + this->real;
        ans.imaginary = a.imaginary + this->imaginary;
        return ans;
    }

    complexNumber operator -(complexNumber &a)  //Substracting two complex numbers
    {
        complexNumber ans;
        ans.real = this->real - a.real;
        ans.imaginary = this->imaginary - a.imaginary;
        return ans;
    }

    complexNumber operator *(complexNumber &a)  //Product of two complex numbers
    {
        complexNumber ans;
        ans.real = (a.real * this->real) - (a.imaginary * this->imaginary);
        ans.imaginary = (a.imaginary*this->real) + (this->imaginary*a.real);
        return ans;
    }

    void operator ++(int)                       //postfix Increment of complex number (we use a dummy integer for postfix incrementation)
    {
        this->real += 1;
        this->imaginary += 1;
    }

    void operator --()                          //prefix decrement of complex number
    {
        this->real -= 1;
        this->imaginary -= 1;
    }
};

int main(void)
{
    complexNumber a,b,c; 
    cout << "Enter the first complex number: ";
    a.input();

    cout << "Enter the second complex number: ";
    b.input();

    c = a + b;
    cout << "\nThe addition is:- ";
    c.display();

    c = a - b;
    cout << "The substraction is:- ";
    c.display();

    c = a * b;
    cout << "The product is:- ";
    c.display();


    cout << "\nThe increment of the first complexnumber is: ";
    a++;
    a.display();

    cout << "The decrement of the second complexnumber is: ";
    --b;
    b.display();

    return 0;
}
