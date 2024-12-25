#include <iostream>
using namespace std;
int main()
{    char playagain;
cout << "Welcome to the game ! " << endl;
    do
    {
        int n;
        cout << "Enter number between 1 and 10 " << endl;
        cin >> n;

        int computerChoice = rand() % 10 + 1;

        if (n == computerChoice)
        {
            cout << "Congrats ! you guessed it right ." << endl;
            cout << "you won ." << endl;
        }
        else
        {
            cout << "Oops ! you guessed wrong ." << endl;
        }

       
        cout << "Do you want to play again ? (y/n) ";
        cin >> playagain;

    }

    while (playagain == 'y' || playagain == 'Y');

    cout << "Thanks for playing !";
    return 0;
}