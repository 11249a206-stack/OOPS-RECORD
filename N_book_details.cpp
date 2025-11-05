#include<iostream>
using namespace std;
class book{
    private:
    char ISBNO[50]; char Bookname[50];char Author[50];
    int Pages,AccessionNo;
    float Price;
    public:
    void getdetails(){
        cout<<"Enter Bookname:";
        cin>>Bookname;
        cout<<"Enter ISBNO:";
        cin>>ISBNO;
        cout<<"Enter Name of the Author:";
        cin>>Author;
        cout<<"Eter number of Pages:";
        cin>>Pages;
        cout<<"Enter AccessionNo:";
        cin>>AccessionNo;
        cout<<"Price:";
        cin>>Price;
    }
    void displaydetails(){
        cout<<"Bookname:"<<Bookname<<endl;
        cout<<"ISBNO:"<<ISBNO<<endl;
        cout<<"Author:"<<Author<<endl;
        cout<<"Pages:"<<Pages<<endl;
        cout<<"AccessionNo:"<<AccessionNo<<endl;
        cout<<"Price:"<<Price<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of books in the library:";
    cin>>n;
    book library[n];
    cout<<"\n enter library Book details:";
    for(int i=0;i<n;i++){
        cout<<"\n Book<<i+1<<\n";
        library[i].getdetails();
    }
    cout<<"\n library book records \n";
    for(int i=0;i<n;i++){
        cout<<"\nBook"<<i+1<<"information:";
        library[i].displaydetails();
    }
    return 0;
}