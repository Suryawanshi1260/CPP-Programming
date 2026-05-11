#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              //non static
        int j;              
        static int k;       // Static

};
    Demo()
  {

  }

 int Demo :: k=11;



int main()
{
    Demo dobj;

    cout<<Demo::k<<"\n";   //11
    cout<<dobj.i<<"\n";    //0
    cout<<dobj.j<<"\n";    //0

    return 0;
}