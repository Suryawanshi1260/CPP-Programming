#include<stdio.h>

int Addition(int No1, int No2)
{
    int ans=0;
    ans= No1+No2;
    return ans;
}

 int Subtraction(int No1, int No2)
{
    int ans=0;
    ans= No1-No2;
    return ans;  
}

int main()
{

    int A=11;
    int B=10;
    int result=0;

    result= Addition(A,B);
    printf("Addition is: %d\n",result);

    result= Subtraction(A,B);
    printf("Subtraction is: %d\n",result);


    return 0;
}