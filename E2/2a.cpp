#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    int vow = 0, cons = 0, digits = 0, speciChar = 0, chars = 0, lines = 1, words = 1;
    string inp;

    ifstream fin("lorem_ipsum.txt");
    if (fin)
    {
        ostringstream ss;
        ss << fin.rdbuf();
        inp = ss.str();
    }

    if (inp.length() == 0)
    {
        cout << "Oops!! File is Empty." << endl;
    }

    // char inp[20];
    // cout << "Enter Input String :: ";
    // cin >> inp;

    for (int i = 0; i < inp.length(); i++)
    {
        char ch = inp[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = tolower(ch);
            chars++;
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == '\n')
        {
            lines++;
            words = words + 1;
        }
        else if (ch == ' ')
        {
            words++;
        }
        else
        {
            speciChar++;
        }
    }

    cout << "No. of characters:- " << chars << endl;
    cout << "No. of words:- " << words << endl;
    cout << "No. of digits:- " << digits << endl;
    cout << "No. of vowels:- " << vow << endl;
    cout << "No. of consonant:- " << cons << endl;
    cout << "No. of special characters:- " << speciChar << endl;
    cout << "No. of lines:- " << lines << endl;

    fin.close();

    return 0;
}