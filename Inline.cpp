//inline function without class
#include<iostream>
using namespace std;

inline void displayNum(int num){
    cout<<num<<endl;

}

int main ()
{
    // first function call
    displayNum (100);

    //second function call
    displayNum (200);

    // third function call
    displayNum (300);

    return 0;
    


}