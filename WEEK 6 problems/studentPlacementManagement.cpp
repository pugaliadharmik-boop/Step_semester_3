#include <iostream>
#include <string>
using namespace std;

class PlacementRecord {
    string studentName;
    string company;
    double packageLpa;

public:
    PlacementRecord() {
        studentName = "";
        company = "";
        packageLpa = 0;
    }

    PlacementRecord(string name, string comp, double package) {
        studentName = name;
        company = comp;
        packageLpa = package;
    }

    void printRecord() {
        cout << studentName << " -> " << company << " @ " << packageLpa << " LPA" << endl;
    }
};

int main() {
    PlacementRecord records[3];

    for (int i = 0; i < 3; i++) {
        string name, company;
        double packageLpa;

        cin >> name >> company >> packageLpa;

        records[i] = PlacementRecord(name, company, packageLpa);
    }

    for (int i = 0; i < 3; i++) {
        records[i].printRecord();
    }

    return 0;
}