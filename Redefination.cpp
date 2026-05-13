#include<iostream>
using namespace std;

class Base
{
    public:
      int i,j;

    void fun()
    { cout<<"inside base fun\n"; }

    void gun()
    { cout<<"inside base gun\n"; }
    
    void sun()
    { cout<<"inside base sun\n"; }


}; //8 byte

class Derived : public Base
{
    public:
       int x,y;
    
    void fun()      //redefination
    { cout<<"Inside Derived fun\n";  }  
    
    void sun()     //redefination
    { cout<<"inside Derived sun\n"; } 
  
    void run()      //defination
    { cout<<"inside Deeived run\n"; }

};  //16 byte

int main()
{
    Base *bp=NULL;
    
    bp= new Derived();   //upcasting

    bp->fun();      //Base fun
    bp->gun();      //Base gun
    bp->sun();      //Base sun
   // bp->run();      //error

    return 0;
}

