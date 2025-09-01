#include <iostream>
#include <string>
using namespace std;

string deletePattern(string text, string pattern) {
    size_t pos;
    while ((pos = text.find(pattern)) != string::npos) {
        text.erase(pos, pattern.length());
    }
    return text;
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter pattern to delete: ";
    cin >> pattern;

    string result = deletePattern(text, pattern);
    cout << "Modified text: " << result << endl;
    return 0;
}

