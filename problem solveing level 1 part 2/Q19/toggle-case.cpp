#include <iostream>
using namespace std;

// دالة تقوم بتبديل حالة كل حرف في الكلمة:
// - لو الحرف كابيتال يتحول لسمول
// - لو الحرف سمول يتحول لكابيتال
// - باقي الرموز تفضل زي ما هي
string uptolow(string word) {
    string results = ""; // هنخزن فيها الكلمة الجديدة بعد التعديل

    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            // لو الحرف كابيتال نحوله لسمول
            results += tolower(word[i]);
        } else if (islower(word[i])) {
            // لو الحرف سمول نحوله لكابيتال
            results += toupper(word[i]);
        } else {
            // لو مش حرف (زي رقم أو رمز) نضيفه زي ما هو
            results += word[i];
        }
    }

    return results;
}

int main() {
    string word;
    cout << "Enter a word: "; // نطلب من المستخدم يدخل كلمة
    cin >> word;

    // نحول الكلمة ونخزن الناتج
    string results = uptolow(word);

    // نطبع الكلمة بعد التبديل
    cout << "Converted: " << results << endl;

    return 0;
}