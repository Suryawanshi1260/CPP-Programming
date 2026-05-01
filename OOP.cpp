#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1; 
        int No2;

        Arithematic()
        {
            No1=0;
            No2=0;
        }

        Arithematic(int value1, int value2)
        {
            No1= value1;
            No2= value2;
        }

        int Addition()
        {
            int ans=0;
            ans= No1+No2;
            return ans;
        }

        int Subtraction()
        {
            int ans=0;
            ans= No1-No2;
            return ans;  
        }
};
int main()
{
    Arithematic aobj(11,10);
    int Result = 0 ;

    Result= aobj.Addition();
    cout<<"Addition is : "<<Result<<"\n";

    Result= aobj.Subtraction();
    cout<<"Subtraction is : "<<Result<<"\n";

    return 0;
}