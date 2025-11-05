#include<iostream>
using namespace std;
class Demo{
    private:
    int number;
    public:
    Demo(int n){
        number=n;
        cout<<"constructor called.Number="<<number<<endl;
    }
    ~Demo(){
        cout<<"Destructor called.Number="<<number<<endl;
    }
    void display(){
        cout<<"value of number is:"<<number<<endl;
    }
};
int main(){
    cout<<"creating first object"<<endl;
    Demo object1(10);
    cout<<"creating second object"<<endl;
    Demo object2(20);
    cout<<"Display values"<<endl;
    object1.display();
    object2.display();
    cout<<"existing main"<<endl;
    return 0;

}
