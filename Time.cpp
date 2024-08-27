#include<iostream>
using namespace std;
class Time
{
    int hrs,min,sec;
    public:
    //Constructer to set values
    Time(int h,int m,int s)
    {
        hrs=h;
        min=m;
        sec=s;
    }
    void display()
    {
        cout<<"Time ="<<hrs<<":"<<min<<":"<<sec;
    }
};
int main ()
{
    int h,m,s;
    cout<<"enter time Hr,min,secs:";
    cin>>h>>m>>s;
    //creating object with data
    Time t(h,m,s);
    t.display();
    return 0;
}