#include<iostream>
using namespace std;

#ifndef COMPLEX
#define COMPLEX

class complexNumber
{
    int real,img;
  
  public :
    complexNumber()
    {
        this->real = 10;
        this->img = 10;
    }
    complexNumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    complexNumber(complexNumber &A)
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

#endif