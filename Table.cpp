#include<iostream>                          
//header file;
using namespace std;

int main ()                                     //main function
{                                          //start program
    int a=2;                                     //variable declaration


    cout<<"enter the number:";                      //output opration
    cin>>a;

    cout<<"\nMultiplication table for"<<a <<":\n";
    for (int i=1;i<=10;i++){                           //looping statement
        cout<<a <<"x"<<i<< " = "<<a * i<<endl;

    }                                            //end of program
    return 0;
 
}