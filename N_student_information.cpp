#include<iostream>
using namespace std;

class student {
private:
    char name;
    int rollno;
    float marks;

public:
    void getdetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displaydetails() {
        cout << "\nStudent Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    student students[n];

    cout << "\nEnter student details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].getdetails();
    }

    cout << "\nDisplaying student details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " Information:" << endl;
        students[i].displaydetails();
    }

    return 0;
}
