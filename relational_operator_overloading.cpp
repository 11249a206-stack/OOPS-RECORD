#include <iostream>
using namespace std;

class Student {
private:
    float Height;

public:
    Student(float h) : Height(h) {}
    float getHeight() const { return Height; }

    // Overload relational operators for height comparison
    bool operator<(const Student& other) const { return Height < other.Height; }
    bool operator>(const Student& other) const { return Height > other.Height; }
    bool operator==(const Student& other) const { return Height == other.Height; }
};

int main() {
    Student s1(1.75);
    Student s2(1.80);

    // Comparison using overloaded operators
    cout << "Student 1 height: " << s1.getHeight() << " meters\n";
    cout << "Student 2 height: " << s2.getHeight() << " meters\n";

    cout << "\nComparing heights:\n";
    cout << "Student 1 < Student 2: " << (s1 < s2 ? "True" : "False") << endl;
    cout << "Student 1 > Student 2: " << (s1 > s2 ? "True" : "False") << endl;
    cout << "Student 1 == Student 2: " << (s1 == s2 ? "True" : "False") << endl;

    return 0;
}
