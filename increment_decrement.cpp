#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor
    Counter(int v = 0) : value(v) {}

    // Overload prefix increment operator (++obj)
    Counter operator++() {
        ++value;  // increment first
        return *this;
    }

    // Overload postfix increment operator (obj++)
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    // Overload prefix decrement operator (--obj)
    Counter operator--() {
        --value;  // decrement first
        return *this;
    }

    // Overload postfix decrement operator (obj--)
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(10);

    cout << "Initial ";
    c1.display();

    ++c1;  // prefix increment
    cout << "After prefix increment (++c1): ";
    c1.display();

    c1++;  // postfix increment
    cout << "After postfix increment (c1++): ";
    c1.display();

    --c1;  // prefix decrement
    cout << "After prefix decrement (--c1): ";
    c1.display();

    c1--;  // postfix decrement
    cout << "After postfix decrement (c1--): ";
    c1.display();

    return 0;
}
