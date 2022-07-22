#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char inp[20];
    cout << "Enter Input String :: ";
    cin >> inp;
    if (int(inp[0]) >= 65 && int(inp[0]) <= 90 || int(inp[0]) >= 97 && int(inp[0]) <= 122 || int(inp[0]) == 95)
    {
        for (int i = 0; i < strlen(inp); i++)
        {
            if (int(inp[i]) >= 48 && int(inp[i]) <= 57 || int(inp[i]) >= 65 && int(inp[i]) <= 90 || int(inp[i]) >= 97 && int(inp[i]) <= 122 || int(inp[i]) == 95)
            {
            }
            else
            {
                cout << "Not a valid identifier.\n";
                exit(0);
            }
        }
        cout << "Is a valid identifier.\n";
    }
    else
    {
        cout << "Not a valid identifier.\n";
    }
    return 0;
}

/*
ASCII
48-57 -> Numbers
65-90 -> Uppercase Alphabets
97-122 -> Lowercase Alphabets
95 -> Underscore
*/