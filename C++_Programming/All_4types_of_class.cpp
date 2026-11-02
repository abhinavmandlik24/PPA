#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
        static int x;
        Demo(int i, int j)
        {
            No1 = i;
            No2 = j;
        }
        void fun()
        {
            cout<<No1 <<"\n";
            cout<<No2 <<"\n";
            cout<<x <<"\n";
        }
        static void gun()
        {
            cout<<x <<"\n";
        }
};

int Demo::x=11;

int main()
{
    cout<<Demo::x <<"\n";
    Demo::gun();
    Demo obj1(10,20);
    Demo obj2(30,40);
    cout<<obj1.No1 <<"\n";
    cout<<obj1.No2 <<"\n";
    cout<<obj2.No1 <<"\n";
    cout<<obj2.No2 <<"\n";
    obj1.fun();
    obj2.fun();
    cout<<sizeof(obj1) <<"\n";
   
    return 0;
}

