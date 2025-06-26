// Q19 - Count how many times a character appears in a string

#include <iostream>
using namespace std;

// دالة لحساب عدد مرات ظهور حرف x في string y
int countCharacter(string y, char x) {
    int results = 0;
    for (int i = 0; i < y.length(); i++) {
        if (y[i] == x) {
            results += 1;
        }
    }
    return results;
}

int main() {
    string y;
    char x;

    cout << "Enter a word: ";
    cin >> y;

    cout << "Enter a character: ";
    cin >> x;

    int results = countCharacter(y, x);
    cout << "Character '" << x << "' appears " << results << " times.";

    return 0;
}