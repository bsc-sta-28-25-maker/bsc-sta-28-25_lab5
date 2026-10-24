
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <sstream>
using namespace std;

string Reverse(string fileData)
{
    reverse(fileData.begin(), fileData.end());
    return fileData;
}

int main()
{
    ifstream file("data.txt");
    string fileData;

    getline(file, fileData);
    file.close();

    int vowels = 0;
    int words = 0;

    for (int i = 0; i < fileData.length(); i++)
    {
        char x = tolower(fileData[i]);

        if ( x == 'a' || x == 'e' || x == 'i' ||
            x == 'o' || x == 'u')
        {
            vowels++;
        }
    }

    stringstream y(fileData);
    string word;

    while (y >> word)
    {
        words++;
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    for (int i = 0; i < fileData.length(); i++)
    {
        if (i > 0 && fileData[i - 1] == ' ')
        {
            if (fileData[i] != ' ')
            {
                i++;
                if (i < fileData.length())
                {
                    fileData[i] = toupper(fileData[i]);
                }
            }
        }
    }

    cout << "Second letter of each word capitalized: "
         << fileData << endl;

    return 0;
}
