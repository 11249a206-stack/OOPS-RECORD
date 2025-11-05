#include<iostream>
using namespace std;
class Book{
    private:
    char ISBNO[50],BookName[50],Author[50];
    int Pages,AccessionNo;
    float Price;
    public:
    void getdetails(){
        cout<<"Enter Book Name:";
        cin>>BookName;
        cout<<"Enter ISBNO:";
        cin>>ISBNO;
        cout<<"Enter Name of the Author:";
        cin>>Author;
        cout<<"Enter number of Pages:";
        cin>>Pages;
        cout<<"Enter AccessionNo:";
        cin>>AccessionNo;
        cout<<"Enter Price:";
        cin>>Price;
    }
    void displaydetails(){
        cout<<"Book Name:"<<BookName<<endl;
        cout<<"ISBNO:"<<ISBNO<<endl;
        cout<<"Author:"<<Author<<endl;
        cout<<"Pages:"<<Pages<<endl;
        cout<<"AccNo:"<<AccessionNo<<endl;
        cout<<"Price:"<<Price<<endl;
    }
};
int main(){
    Book b;
    b.getdetails();
    b.displaydetails();
    return 0;
}