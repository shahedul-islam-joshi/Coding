#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, pat;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter pattern: ";
    getline(cin, pat);

    int n = text.size(), m = pat.size();

    for (int i = 0; i <= n - m; i++)
        if (text.substr(i, m) == pat)
        {
            cout << "Pattern found at position: " << i;
            return 0;
        }

    cout << "Pattern not found";
    return 0;
}

