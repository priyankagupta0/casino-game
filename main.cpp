#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;
void display();
void rules();

int main()
{
    display();
    bool win;
    int bet;
    string name;
    char input;
    int amount;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter amount: ";
    cin >> amount;
    do
    {
        rules();
        // game code

    bet:
        cout << "Enter the amount you want to bet:" << endl;
        cin >> bet;
        if (bet > amount)
        {
            cout << "Invaild output\n";
            goto bet;
        }

        int winningball = rand() % 10 + 1;
        int gamemethod;
    input:
        cout << "\nEnter gamemethod : " << endl;
        cout << "Press 1 if you want to input your guessing number where ball will stop " << endl;
        cout << "Press 2 if you think that the number where ball will stop is even number " << endl;
        cout << "Press 3 if you think that the number where ball will stop is odd number " << endl;
        cout << "Enter input :   ";
        cin >> gamemethod;
        if (gamemethod == 1)
        {
            int guess;
            cout << "\nchoose a number between 1-10:";
            cin >> guess;
            cout<<"well the number was..."<<winningball<<endl;
            if (guess == winningball)
            {
                win = 1;
            }
            else
            {
                win = 0;
            }
        }
        else if (gamemethod == 2)
        {
            cout << "the random number was..." << winningball << endl;
            if (winningball % 2 == 0)
            {
                win = 1;
            }
            else
            {
                win = 0;
            }
        }
        else if (gamemethod == 3)
        {
            cout << "the random number was..." << winningball << endl;

            if (winningball % 2 != 0)
            {
                win = 1;
            }
            else
            {
                win = 0;
            }
        }
        else
        {
            cout << "bruh look at input table again and pic a number between '1' to '3'\n";
            goto input;
        }
        if (win == 1)
        {
            cout << "OMG! its correct..congo" << endl;
            amount = bet * 10;
            cout << "Your final amount is " << amount << endl;
        }
        if (win == 0)
        {
            cout << "ouch..loser you lost your money bruh!\n ";
            amount = amount - bet;
            cout << "Your final amount is " << amount << endl;
        }

        cout << "whould you like to play again? y/n : ";
        if (amount == 0)
        {
            cout << "you dont have any money.. you broke idiot so you cant play no more\n"
                 << endl;
        }
        cin >> input;
    } while (input != 'n');

    cout << name << " made " << amount << " rupees.\n";

    return 0;
}
void display()
{
    string var = "\n=========================================================================================="
                 "\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     "
                 "\n CC          A  A      SS             III     NN N   NN   OO      OO    "
                 "\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    "
                 "\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO   "
                 "\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO   "
                 "\n===============================================================================================\n";

    for (int i = 0; i < var.size(); i++)
    {
        Sleep(3);
        cout << var[i];
    }
}
void rules()
{
    system("cls");
    cout << "\n\n";
    cout << "\n\n========================================================================================\n\n";
    cout << "\t\tRULES OF THE GAME\n";
    cout << "\n\n========================================================================================\n\n";
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    cout << "\n\n========================================================================================\n\n";
}