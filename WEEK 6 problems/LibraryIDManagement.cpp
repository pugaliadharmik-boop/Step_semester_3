#include <iostream>
#include <string>
using namespace std;

class IdCard {
public:
    string name;
    int booksIssued;

    IdCard(string n, int b) {
        name = n;
        booksIssued = b;
    }
};

int main() {
    IdCard ravi("Ravi", 0);

    IdCard &duplicate = ravi;

    duplicate.booksIssued = 3;

    cout << "Ravi's booksIssued (via first variable): "
         << ravi.booksIssued << endl;

    cout << "duplicate == ravi: " << boolalpha << (&duplicate == &ravi) << endl;

    IdCard separate("Ravi", 3);

    cout << "separate == ravi: " << boolalpha << (&separate == &ravi) << endl;

    return 0;
}