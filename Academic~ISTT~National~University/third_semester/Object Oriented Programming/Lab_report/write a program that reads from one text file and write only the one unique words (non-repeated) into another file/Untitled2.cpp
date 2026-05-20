#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile || !outputFile) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string words[1000]; // Array to store words from file
    int count = 0;

    // Step 1: Read all words into an array
    while (inputFile >> words[count] && count < 1000) {
        count++;
    }

    cout << "Processing words..." << endl;

    // Step 2: Check each word against the rest of the array
    for (int i = 0; i < count; i++) {
        bool isUnique = true;
        for (int j = 0; j < count; j++) {
            // If the word matches another word at a different index
            if (i != j && words[i] == words[j]) {
                isUnique = false;
                break;
            }
        }

        // Step 3: Write to file if it appeared only once
        if (isUnique) {
            outputFile << words[i] << " ";
        }
    }

    cout << "Unique words have been written to output.txt" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
