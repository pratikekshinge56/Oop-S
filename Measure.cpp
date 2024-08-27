#include<iostream>               //header file 
using namespace std;

class Measure 
{
    int add1, add2, add3;
    public:

    Measure (){
        add1=30;
        add2=20;
    }
    void sum ()
    {
        add3 = add1 + add2;
    }
    void display()
    {
        cout<<"\n sum ="<<add3;
    }

};
int main ()
{
    Measure m1 ;
    m1. sum ();
    m1. display();

}