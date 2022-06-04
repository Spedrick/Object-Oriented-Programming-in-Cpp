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
};

int main(void)
{
    myClass A;
    return 0;
}

