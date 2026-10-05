// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     cout << "enter the year: ";
//     cin >> a;

//     if (a % 100 == 0) {
//         if (a % 400 == 0) {
//             cout << "Year is leap year";
//         } else {
//             cout << "Year is not leap year";
//         }
//     } else {
//         if (a % 4 == 0) {
//             cout << "Year is leap year";
//         } else {
//             cout << "Year is not leap year";
//         }
//     }

//     return 0;
// }

// Apply a discount based on the purchase amount and print the final bill.
#include <iostream>
using namespace std;

int main() {
    double amount;
    double discount;

    cout << "Enter the purchase amount: ";
    if (!(cin >> amount) || amount < 0) {
        cout << "Please enter a valid non-negative amount.\n";
        return 1;
    }

    if (amount <= 5000) {
        discount = 0.0;
    } else if (amount <= 7000) {
        discount = 0.05;
    } else if (amount <= 9000) {
        discount = 0.10;
    } else {
        discount = 0.20;
    }

    const double discountAmount = amount * discount;
    const double finalBill = amount - discountAmount;

    cout << "Discount: " << discount * 100 << "%\n";
    cout << "Discount amount: " << discountAmount << '\n';
    cout << "Final bill: " << finalBill << '\n';

    return 0;
}
