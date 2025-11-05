#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator to add two Complex objects
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.6, 4.2);

    cout << "First Complex number: ";
    c1.display();

    cout << "Second Complex number: ";
    c2.display();

    Complex c3 = c1 + c2; // Calls overloaded + operator

    cout << "Sum of two Complex numbers: ";
    c3.display();

    return 0;
}
