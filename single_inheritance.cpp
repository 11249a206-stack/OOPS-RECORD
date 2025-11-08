#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int rno;

public:
    void getstudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent() {
        cout << "Name of the student = " << name;
        cout << "\nRoll number of the student = " << rno;
    }
};

class address : public student {
private:
    string city;

public:
    void getaddress() {
        getstudent();
        cout << "Enter city: ";
        cin >> city;
    }

    void displayaddress() {
        displaystudent();
        cout << "\nCity = " << city;
    }
};

int main() {
    address a1;
    a1.getaddress();
    cout << "\n\n--- Student Details ---\n";
    a1.displayaddress();
    cout << endl;
    return 0;
}
