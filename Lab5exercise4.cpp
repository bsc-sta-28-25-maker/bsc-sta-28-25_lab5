#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer value between 5 and 10" << endl;

    while (!(cin >> number) || number < 5 || number > 10)
    {
        if (cin.fail())
        {
            cout << "Sorry, you entered an invalid number, please try again." << endl;
            cin.clear();
            cin.ignore(1000);
        }
        else
        {
            cout << "You entered " << number
                 << ". Please enter a number between 5 and 10." << endl;
        }
    }

    cout << "Your input value (" << number
         << ") has been accepted." << endl;

    return 0;
}
