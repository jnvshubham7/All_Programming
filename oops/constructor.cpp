#include <bits/stdc++.h>
using namespace std;

class student {
    string name;

public:
    int age;
    bool gender;

    // Default constructor
    student() {
        cout << "default constructor" << endl;
    }

    // Parameterized constructor
    student(string s, int a, int b) {
        name = s;
        age = a;
        gender = b;
        cout << "parameterized constructor" << endl;
    }

    // Copy constructor
    student( student &p) {
        name = p.name;
        age = p.age;
        gender = p.gender;
        cout << "copy constructor" << endl;
    }

    void print() {
        cout << name << " " << endl;
        cout << age << " " << endl;
        cout << gender << " " << endl;
    }
};

int main() {
    // Default constructor
    student s1;
    s1.print();

    // Parameterized constructor
    student s2("shubham", 21, 1);
    s2.print();

    // Copy constructor
    student s3(s2);
    s3.print();

    return 0;
}
