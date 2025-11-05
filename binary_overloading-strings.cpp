#include <iostream>
#include <cstring> 
using namespace std;

class MyString {
private:
    char* str;

public:
    // Constructor to initialize string
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overload the '+' operator for string concatenation
    MyString operator+(const MyString& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1]; // +1 for null-terminator
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr; // Clean up temporary memory
        return result;
    }

    // Display the string
    void display() const {
        cout << str << endl;
    }

    // Destructor to release memory
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString result = s1 + s2; // Concatenate using overloaded '+'
    
    cout << "Concatenated String: ";
    result.display();

    return 0;
}
