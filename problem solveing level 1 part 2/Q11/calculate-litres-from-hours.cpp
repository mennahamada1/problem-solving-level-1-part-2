#include <iostream>
using namespace std;

int main() {
    int litres;
    int hours;

    // طلب عدد الساعات من المستخدم
    cout << "Enter the number of hours: ";
    cin >> hours;

    // نحسب عدد اللترات (نصف لتر كل ساعة)
    // الناتج هيكون عدد صحيح فقط (مثلاً 1.5 هيبقى 1)
    litres = hours / 2;

    // طباعة الناتج
    cout << "Litres: " << litres;

    return 0;
}