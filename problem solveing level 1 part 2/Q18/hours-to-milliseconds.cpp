#include <iostream>
using namespace std;

// دالة لتحويل عدد الساعات إلى milliseconds
long long calculate(int hours) {
    long long milliseconds = hours * 60 * 60 * 1000;
    return milliseconds;
}

int main() {
    long long hours;
    cout << "Enter a number of hours: " << endl;
    cin >> hours;

    long long milliseconds = calculate(hours);
    cout << "Milliseconds = " << milliseconds;

    return 0;
}