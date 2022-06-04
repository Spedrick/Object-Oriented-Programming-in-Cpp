#include<iostream>
using namespace std;

class Yuvraj
{    
public:
    int rollNo = 66;

    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void printRollNo()
    {
        cout << rollNo << endl;
        return;
    }
};

int main(void)
{
    Yuvraj me;
    static int tempRoll = me.rollNo;
    me.setRollNo(100);
    me.printRollNo();
    cout << tempRoll << endl;
    return 0;
}

