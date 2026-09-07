#include<iostream>
using namespace std;

class Employee{
private:
    int id, salary;
    string name;

public:
    void input(){
        cout<<"Enter your ID: ";cin>>id;
        cout<<"Enter your name: ";cin>>name;
        cout<<"Eneter your salary: ";cin>>salary;
    }
    void output(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};



int main(){
    system("cls");

    Employee e;
    e.input();
    e.output();


    return 0;
}