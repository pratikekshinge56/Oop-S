#include<iostream>
#include<string>

using namespace std;

class student{
public:            
    std::string name;
    string address;
    int age;
    int rollno;
    int ID_no;
    int Enrll_no;

void introduce()
{
    cout<<" name :"<<name
    <<"\n address :"<<address
    <<"\n age :"<<age
    <<"\n rollno :"<<rollno
    <<"\n ID_no :"<<ID_no
    <<"\n Enrll_no:"<<Enrll_no <<endl;

}    

};

int main(){
    student s;
    s.name="ganesh";
    s.address="ahmednagar";
    s.age=18;
    s.rollno=14;
    s.ID_no=1545;
    s.Enrll_no=23212355;

    s.introduce();

    return 0;
}