#include <iostream>
using namespace std;

int main() {
    int results = 1;
    int numbers[4] = {1, 2, 3, 4};

    // نضرب كل عنصر في المصفوفة ونخزن الناتج في متغير results
    for (int i = 0; i < 4; i++) {
        results *= numbers[i];
    }

    // طباعة حاصل الضرب
    cout << "Result of multiplying all elements: " << results;

    return 0;
}