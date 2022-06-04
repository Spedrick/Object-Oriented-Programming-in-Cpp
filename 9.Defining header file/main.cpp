#include <iostream>
using namespace std;

#include "complexNumber.h"

int main(void)
{
    complexNumber a;
    a.input();

    int x,y;
    cin >> x >> y;
    complexNumber b(x,y);     

    complexNumber c(b);                
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
