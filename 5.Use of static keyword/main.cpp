#include<iostream>
using namespace std;

class Yuvraj
{
private:
    int rollNo = 66;
public:
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    static void printRollNo()
    {
        cout << rollNo << endl;
        return;
    }
};

int main(void)
{
    Yuvraj me;
    me.setRollNo(100);
    me.printRollNo();
    return 0;
}

