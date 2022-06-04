#include <iostream>
using namespace std;

class myClass
{
private:
    int a = 5;

public:
    int b = 10; 
    int getA()
    {
        return this->a;
    }

    int changeA(int x)
    {
        this->a = x;
    }
};

int main()
{
    myClass A;

    cout << A.b << endl
         << A.getA() << endl;  //accessing public and private data members
    
    A.b = 15;
    A.changeA(10);

    cout << A.b << endl
         << A.getA() << endl; //changing the values of public and private data members

    return 0;
}