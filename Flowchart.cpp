#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
    int number = (rand() % 100) +1; // 0-99 + 1 -> 1-100
    int guess = 0;

    do
    {
        cout << "Enter Guess (1-100): ";
        cin >> guess;

        if (guess > number)
            cout << "Guess Lower!" << ends;
        else if (guess < number)
            cout << "Guess higher!" << ends;
        else 
            cout << "You Won!" << ends;

    } while ( guess != number);


}