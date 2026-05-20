#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin) {
        cout << "Input file not found!" << endl;
        return 1;
    }

    map<string, int> freq;
    string word;

    // Read words and count frequency
    while (fin >> word) {
        freq[word]++;
    }

    // Write only unique words
    for (auto &p : freq) {
        if (p.second == 1) {
            fout << p.first << endl;
        }
    }

    fin.close();
    fout.close();

    cout << "Unique words written to output.txt" << endl;
    return 0;
}
