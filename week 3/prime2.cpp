#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cin >> number;

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Is the number " << number << " a Prime number? Yes";
    else
        cout << "Is the number " << number << " a Prime number? No";

    return 0;
}