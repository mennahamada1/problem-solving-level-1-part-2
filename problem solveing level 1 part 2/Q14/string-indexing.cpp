// Q16 - Extract part of a word using string indexing (characters 2 to 4)

#include <iostream>
using namespace std;

// دالة بتاخد كلمة وتستخرج منها الحرف التاني والتالت والرابع (index 1 → 3)
string name(string word) {
    string results = "";
    for(int i = 1; i < 4; i++) {   
        results += word[i];
    }
    return results;
}

int main() {
    string inp;
    string results;

    cout << "Enter a word: ";
    cin >> inp;

    // استدعاء الدالة ومعالجة الناتج
    results = name(inp);

    // طباعة الجزء المستخرج من الكلمة
    cout << "Extracted part: " << results;

    return 0;
}