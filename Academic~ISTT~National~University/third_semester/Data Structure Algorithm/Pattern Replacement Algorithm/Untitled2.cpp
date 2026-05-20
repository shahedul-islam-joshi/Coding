#include <iostream>
#include <string>
using namespace std;

string replacePattern(string text, string pattern, string replacement) {
    size_t pos;
    while ((pos = text.find(pattern)) != string::npos) {
        text.replace(pos, pattern.length(), replacement);
    }
    return text;
}

int main() {
    string text, pattern, replacement;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter pattern to replace: ";
    cin >> pattern;
    cout << "Enter replacement: ";
    cin >> replacement;

    string result = replacePattern(text, pattern, replacement);
    cout << "Modified text: " << result << endl;
    return 0;
}

