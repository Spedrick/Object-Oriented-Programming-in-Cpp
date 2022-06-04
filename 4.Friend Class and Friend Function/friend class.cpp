#include <iostream>
using namespace std;

class A
{
private:
    int a = 5;

public:
    int getA()
    {
        return this->a;
    }
    friend class B;
};

class B
{
private:
    int b;

public:
    int changeA(A &x)
    {
        x.a = 10;
        return x.a;
    }
};

int main(void)
{
    A a;
    cout << a.getA() << endl;

    B b;
    cout << b.changeA(a);
    return 0;
}
