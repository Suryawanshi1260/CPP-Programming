#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              //non static
        int j;              //non static
        static int k;       //static

       Demo()
       {
        i=0;
        j=0;
       } 

       void fun()  //non static method
       {
            cout<<"inside non static fun\n";
            cout<<"i :"<<i<<"\n";
            cout<<"i :"<<j<<"\n";
            cout<<"i :"<<k<<"\n";
       }

       
       void gun() //static method
       {
            cout<<"inside static fun\n";
            cout<<"k :"<<k<<"\n";
       }
       
    
};

 int Demo:: k=11;

int main()
{
    cout<<Demo::k<<"\n"; 

    Demo::gun();

    Demo dobj;

      
    cout<<dobj.i<<"\n";    //0
    cout<<dobj.j<<"\n";    //0

    dobj.gun();

    return 0;
}