#include <iostream>


class Rectangle 
{
    private:
    double length;
    double width;

    public:

    Rectangle (double l, double w): length (l),width(w){}


    double calculateArea(){
        return length * width;
    }

    void displayArea (){
        std::cout<<"the Area of rectangle is:"<<calculateArea()<<std::endl;
    } 
};

int main (){
    cout<<"enter the length of rectangle:";
    cin>>length;

    cout<<"enter the width of rectangle :";
    cin>>width;

    Rectangle rect(length,width);

    rect.displayArea();

    return 0;
}

