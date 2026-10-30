#include <iostream>
using namespace std;

int main ()
{
    int* ptrInt = new int;
    string* ptrString = new string;

    cout << "enter the interger value ";
    cin >> *ptrInt;

    cout << "enter the string ";
    cin >> *ptrString;

    cout << "The value of the dynamically allocated interger is " << *ptrInt << endl;
    cout << "The value of the dynamically allocated string is " << *ptrString << endl;

    delete ptrInt;
    delete ptrString;

    return 0;
}