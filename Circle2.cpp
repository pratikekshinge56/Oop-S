#include<iostream>
using namespace std;

class Circle{
     
     float r;
     float area;
     public:

     void read();
     void compute();
     void display();
};             



inline void Circle:: read()
{
    cout<<"Enter the radius of the circle:";
    cin>>r;
}

inline void Circle:: compute()
{
    area=3.14*r*r;
}

inline void Circle:: display()
{
    cout<<"Area="<<area<<endl;
}



int main ()
{
    Circle c;
    c.read();//read the radius
    c.compute();//compute the area
    c.display();//diplay the area
    return 0;


}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
