
#include <iostream>
using namespace std;

int main() {
    int num, temp, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        result += (remainder, n);
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
 