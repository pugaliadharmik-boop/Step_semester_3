#include <iostream>
using namespace std;

class MessWallet {
private:
    double balance;

public:
    MessWallet(double opening) {
        if (opening < 0) {
            balance = 0;
            cout << "Warning: Negative opening balance. Starting with 0" << endl;
        }
        else {
            balance = opening;
        }
    }

    void topUp(double amount) {
        if (amount <= 0) {
            cout << "Top-up rejected: invalid amount" << endl;
        }
        else {
            balance += amount;
        }
    }

    void deduct(double amount) {
        if (amount > balance) {
            cout << "Deduct rejected: insufficient balance" << endl;
        }
        else {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    MessWallet wallet(500);

    wallet.topUp(200);
    cout << "Balance after top-up: " << wallet.getBalance() << endl;

    wallet.deduct(1000);
    cout << "Final balance: " << wallet.getBalance() << endl;

    return 0;
}