#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
     // member became Private by not declearing access specifer
    int No1,No2; //characteristics

    void fun()  //Behaviour
    {
        cout<<"inside fun\n";
    }

    void gun() //Behaviour
    {
       cout<<"inside gun\n"; 
    }
};
int main()
{
    //object creation(instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";    
    cout<<mobj1.No1<<"\n";    //error

    mobj1.fun();              //error
    mobj2.fun();              //error

    mobj1.gun();              //error

    return 0;
}