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
        cout << "\nEnter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent() {
        cout << "Name of the student = " << name;
        cout << "\nRoll number of the student = " << rno;
    }
};

class bsc : public student {
private:
    int phy, chem, math;

public:
    void getbsc() {
        getstudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "\nEnter Physics marks: ";
        cin >> phy;
        cout << "\nEnter Chemistry marks: ";
        cin >> chem;
    }

    void displaybsc() {
        displaystudent();
        cout << "\nMath marks = " << math;
        cout << "\nPhysics marks = " << phy;
        cout << "\nChemistry marks = " << chem;
    }
};

class ba : public student {
private:
    int hindi, punjabi;

public:
    void getba() {
        getstudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "\nEnter Punjabi marks: ";
        cin >> punjabi;
    }

    void displayba() {
        displaystudent();
        cout << "\nHindi marks = " << hindi;
        cout << "\nPunjabi marks = " << punjabi;
    }
};

int main() {
    bsc b1;
    ba b2;
    int choice;

    cout << "1. B.Sc\n2. B.A\nEnter your stream: ";
    cin >> choice;

    if (choice == 1) {
        b1.getbsc();
        cout << "\n--- B.Sc Student Details ---\n";
        b1.displaybsc();
    } else {
        b2.getba();
        cout << "\n--- B.A Student Details ---\n";
        b2.displayba();
    }

    cout << endl;
    return 0;
}
