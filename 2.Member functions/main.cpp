#include <iostream>
using namespace std;

class myClass
{
private:
    int a = 5;

public:
    //Initializing class functions(member functions)
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
    cout << A.getA() << endl;  //using class functions
    
    A.changeA(10);
    cout << A.getA() << endl;

    return 0;
}
