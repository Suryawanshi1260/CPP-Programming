#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              //non static
        int j;
        static int k;       //Static
};



int main()
{
    Demo dobj;

    cout<<sizeof(dobj);


    return 0;
}