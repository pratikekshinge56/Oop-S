#include<iostream>
using namespace std;

class Circle{
    public:
     float r;
     float area;


inline void read()
{
    std::cout<<"Enter the radius of the circle:";
    std::cin>>r;
}

inline void compute()
{
    area=3.14*r*r;
}

inline void display()
{
    std::cout<<"the area of circle is:"<<area<<std::endl;
}
};


int main ()
{
    Circle c;
    c.read();//read the radius
    c.compute();//compute the area
    c.display();//diplay the area
    return 0;


}