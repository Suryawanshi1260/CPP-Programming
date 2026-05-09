#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    public:
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
    cout<<mobj1.No1<<"\n";

    mobj1.fun();
    mobj2.fun();

    mobj1.gun();

    return 0;
}