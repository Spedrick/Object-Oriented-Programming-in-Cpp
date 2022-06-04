#include<iostream>
using namespace std;

class myClass
{
public:
    int a = 0;

    myClass() //Initialization of constructor
    {
        //this block of code will be executed 
        //first when the class is called.
        
        cout << "This block of code will be executed as soon as the class is called" << endl;
        this->a = 10;
        cout << "This can be used to initialize the data members of the class" << endl
             << this->a << endl;
    }

    ~myClass() //Initialization of Destructor
    {
        //this block of code will be executed 
        //first when the class is unallocated from the memory.
        
        cout << "\n\nThis block of code will be executed as soon as the life of class ends" << endl;
        this->a = 100;
        cout << "This can be used to initialize the data members of the class" << endl
             << this->a << endl;
    }
};

int main(void)
{
    myClass A;

    A.a = 50;
    cout << "\n\nThis code runs normally outside the constructor" << endl
         << A.a << endl;
    return 0;
}

