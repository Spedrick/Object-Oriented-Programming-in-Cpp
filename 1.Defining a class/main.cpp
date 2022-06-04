#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class complexNumber
{
public :
    int real, img;
};

int main(void)
{
   complexNumber a, b, c, d;

   cin >> a.real;
   cin >> a.img;
   cin >> b.real;
   cin >> b.img;

   c.real = a.real + b.real;
   c.img = a.img + b.img;
   d.real = a.real - b.real;
   d.img = a.img - b.img;

   cout << c.real << "\n";
   cout << c.img << "\n";
   cout << d.real << "\n";
   cout << d.img << "\n";

   return 0;
}
