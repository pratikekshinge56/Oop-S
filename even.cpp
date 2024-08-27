#include <iostream>                        //header file
using namespace std;

int main()                        //main function
{                                 //start a program
    int number ;                  //variable declaration  
    cout<<"enter a number:";       //input operation
    cin>>number;

    if(number % 2 == 0){               //cheak the number

        cout<<"no is even:"<<number<< endl;       //output operation
    }
    else{
        cout<<"no is odd :"<<number <<endl;
    }                                                //end of program

}                               