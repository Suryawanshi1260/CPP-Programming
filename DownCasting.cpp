#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;

};

class Derived : public Base
{
    public:
       int x,y;

};

int main()
{

    Derived *dp = NULL;
    Base bobj;


    dp= &bobj;   //Downcasting

    return  0;
}

