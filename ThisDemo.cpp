#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        Demo(int A,int B)
        {
            i=A;
            j=B;
        
        }
       void display()
        {
            cout<<i<<"\n";
            cout<<j<<"\n";
        }
};

int main()
{
    Demo dobj1(10,20);
    Demo dobj2(50,60);
    
    dobj1.display();  //Caller object
    dobj2.display();  //Caller object



    return 0;
}