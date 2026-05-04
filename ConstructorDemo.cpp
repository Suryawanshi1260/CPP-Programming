#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    public:
    int No1,No2; //characteristics

    //default constructor
    Marvellous()
    {
        cout<<"Inside default constructor\n";
        No1=0;
        No2=0;
    }
        //Parametrised Constructor
        Marvellous(int A, int B)
    {
        cout<<"Inside Parametrised constructor\n";
        No1=A;
        No2=B;
    }
   
        //Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;

    }
    //Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }

};
int main()
{
   cout<<"Inside main\n"; 

   Marvellous mobj1;             //Default 
   Marvellous mobj2(11,21);      //Parametrised
   Marvellous mobj3(mobj2);      //Copy

   cout<<"End of main\n";
   
    return 0;
}
//All destructor gets Called