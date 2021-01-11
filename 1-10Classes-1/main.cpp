#include <iostream>

using namespace std;

class Rectangle {
public:
    void setWidth(int width);
    void setLength(int length);
    int getArea(){
        return width * length;
    }

private:
    int width;
    int length;

};

void Rectangle::setWidth(int width){
    this->width = width;
}
void Rectangle::setLength(int length){
    this->length = length;
}
int main()
{
    Rectangle R;
    R.setWidth(10);
    R.setLength(20);
    cout << "The area of the rectangle is : " << R.getArea() << endl;
    return 0;
}
