// c++ program to demonstrate static member in a class 
# include<iostream>
using namespace std;

class student{
    public:
    //static member 
    static int total;

    //construtor called 
    student(){total+=1;}

};
int student:: total=0;

int main()
{
    //student 1 declare
    student s1 ;
    cout<<"number of student :"<<s1.total<<endl;

    //student 2 declare
    student s2 ;
    cout<<"number of student: "<<s2.total<<endl;

    //student 3 declare
    student s3 ;
    cout<<"number of student:"<<s3.total<<endl;
    return 0;

}