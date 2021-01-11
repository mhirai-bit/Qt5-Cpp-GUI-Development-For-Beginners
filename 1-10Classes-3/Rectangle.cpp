#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square : public Rectangle{
public:
    Square(int side)
        :Rectangle(side, side){

    }
};

Rectangle::Rectangle(){
    clog << "Default Constructor called" << endl;
    this->length = 5;
    this->width = 5;
}

//Rectangle::Rectangle(int w, int l){
//    clog << "Custom Constructor called" << endl;
//    this->width = w;
//    this->length = l;
//}

Rectangle::Rectangle(int w, int l)
    :width(w), length(l){
    clog << "Custom Constructor called" << endl;
}



void Rectangle::setWidth(int width){
    this->width = width;
}
void Rectangle::setLength(int length){
    this->length = length;
}
