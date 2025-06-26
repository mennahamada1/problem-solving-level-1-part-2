#include <iostream>
using namespace std;

// دالة لإزالة المسافات من string
string removeSpaces(string name) {
    string results = "";
    for(int i = 0; i < name.length(); i++) {
        if(name[i] != ' ') {
            results += name[i]; // نضيف الحرف بس لو مش مسافة
        }
    }
    return results;
}

int main() {
    string name;

    cout << "Enter a name: ";
    getline(cin, name); // نقرأ السطر بالكامل

    string results = removeSpaces(name);
    cout << "Without spaces: " << results;

    return 0;
}