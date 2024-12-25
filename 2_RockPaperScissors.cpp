// rock , paper and scissors
#include <iostream>
using namespace std;

int main()
{
    char playagain;
    cout << "Welcome to the game ! " << endl;
    do
    {
        int n;
        cout << "enter :\n 1. rock \n 2.paper \n 3.scissors" << endl;
        cin >> n;

        int computerChoice = rand() % 3 + 1; // for generating random values

        if (n == computerChoice)
        {
            cout << "it's tie " << endl;
        }

        // Rock beats Scissors.
        // Scissors beat Paper.
        // Paper beats Rock.
        string chose;
        if (n == 1)
            chose = "rock";
        if (n == 2)
            chose = "paper";
        if (n == 3)
            chose = "scissors";

        string chose2;
        if (computerChoice == 1)
            chose2 = "rock";
        if (computerChoice == 2)
            chose2 = "paper";
        if (computerChoice == 3)
            chose2 = "scissors";

        if ((n == 1 && computerChoice == 3) || (n == 3 && computerChoice == 2) || (n == 3 && computerChoice == 1))
        {
            cout << "You win  !! " << " since you selected " << chose << " and system selected " << chose2 << endl;
        }
        else
        {
            cout << "you lose !" << " since you selected " << chose << " and system selected " << chose2 << endl;
        }

        cout << "Do you want to play again ? (y/n) ";
        cin >> playagain;
    } while (playagain == 'y' || playagain == 'Y');

    cout << "Thanks for playing !";

    return 0;
}
