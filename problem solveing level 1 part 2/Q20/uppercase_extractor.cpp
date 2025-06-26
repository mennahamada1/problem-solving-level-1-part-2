#include <iostream>
using namespace std;

/*
    🔠 Uppercase Letter Extractor
    This program takes a word from the user and:
    - Extracts all uppercase letters and returns them
    - Prints "is lower" for each lowercase letter
    - Prints any other character directly
*/

// Function to extract uppercase letters from a word
string words(string x) {
    string results = "";
    for (int i = 0; i < x.length(); i++) {
        if (isupper(x[i])) {
            results += x[i];
        } else if (islower(x[i])) {
            cout << "is lower" << endl;
        } else {
            cout << x[i] << endl;
        }
    }
    return results;
}

int main() {
    string x;
    cout << "Enter a word: " << endl;
    cin >> x;

    string results = words(x);
    cout << "Uppercase letters: " << results << endl;

    return 0;

} 