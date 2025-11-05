#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Overload unary minus (-) operator
    Number operator-() const {
        Number temp;
        temp.value = -value; // Negate the value
        return temp;
    }
};

int main() {
    Number n1(10), n2;

    cout << "Before overloading:" << endl;
    n1.display();

    // Apply unary minus operator
    n2 = -n1;

    cout << "\nAfter applying unary minus operator:" << endl;
    n2.display();

    return 0;
}
