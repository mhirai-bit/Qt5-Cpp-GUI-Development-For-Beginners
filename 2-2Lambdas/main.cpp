#include <iostream>

using namespace std;
int main()
{

//Give lambda function a name and call it
//    auto func = [](){
//        cout << "Hello World!" << endl;
//    };
//    func();

//Call lambda function directly after definition
//      [](){
//          cout << "Hello World!" << endl;
//      }();


//Define a lambda that takes parameters
//    [](int a, int b){
//        cout << " a + b = " << a + b << endl;
//    }(7, 3);

//Define a lambda that returns something
//    int sum = [](int a, int b) -> int{
//        return a + b;
//    }(7, 3);

//    cout << "The sum is : " << [](int a, int b) -> int{
//        return a + b;
//    }(7, 3) << endl;

    //Capture Lists;
    int a = 7;
    int b = 3;

    [a,b](){
        cout << "a is : " << a << endl;
        cout << "b is : " << b << endl;
        cout << "a + b = " << a + b << endl;
    }();

    return 0;
}
