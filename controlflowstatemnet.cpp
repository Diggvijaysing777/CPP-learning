#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "enter the year: ";
    cin >> a;

    if (a % 100 == 0) {
        if (a % 400 == 0) {
            cout << "Year is leap year";
        } else {
            cout << "Year is not leap year";
        }
    } else {
        if (a % 4 == 0) {
            cout << "Year is leap year";
        } else {
            cout << "Year is not leap year";
        }
    }

    return 0;
}
