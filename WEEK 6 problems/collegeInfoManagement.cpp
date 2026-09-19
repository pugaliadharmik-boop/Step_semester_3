#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int attendance;

    static string collegeName;
    static int studentCount;

public:
    Student(string n, int a) {
        name = n;
        attendance = a;
        studentCount++;
    }

    static void printCollegeInfo() {
        cout << collegeName << endl;
        cout << "Students created: " << studentCount << endl;
    }
};

string Student::collegeName = "SRM Institute of Science and Technology";
int Student::studentCount = 0;

int main() {
    Student s1("Ravi", 90);
    Student s2("Dharmik", 85);

    Student::printCollegeInfo();

    return 0;
}