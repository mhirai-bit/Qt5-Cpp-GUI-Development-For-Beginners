#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int guessNumber, secretNumber;
    //Initialize
    srand(time(NULL));

    //Generate(1-10)
    secretNumber = rand() % 10 + 1;

    //Ask the user to guess
    cout << "Guess my number ( 1 - 10 ) :" ;

    do{
        cin >> guessNumber;
        cout << "\nnumber was read" << endl;
        if(secretNumber < guessNumber)
        {
            cout << "The number is lower that that" << endl;
        }
        if(secretNumber > guessNumber){
            cout << "The number is higher than that" << endl;
        }
    }while(guessNumber != secretNumber);

    cout << "Congratulatins, the number is :" << guessNumber << endl;
    return 0;
}
