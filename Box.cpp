//c++ program to show the working static member functions
#include<iostream>
using namespace std;

class Box
{
    private:
    static int length;
    static int breadth;
    static int height;

    public:
    static void print()
    {
        cout<<"the value of the length is :" <<length<<endl;
        cout<<"the value of breath is :"  << breadth<<endl;
        cout<<"the value of height is :"  <<height<<endl;

    }

};
//intialize the stitic members
int Box :: length=10;
int Box ::  breadth=20;
int Box :: height=30;

int main()
{
    Box b ;

    cout<<"static member function is called through object name : \n"<<endl;
    b.print();

    cout<<"\nstatic member function is called through class name: \n"<<endl;
    Box :: print ();
    return 0;
    
}


