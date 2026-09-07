#include<iostream>
using namespace std;

class Person{
public:
    int age;
    string name;

    void inputPerson(){
        cout<<"Enter your name: ";cin>>name;
        cout<<"Enter your age: ";cin>>age;
    }
    void outputPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : public Person{
private:
    float score;

public:
    void inputStu(){
        inputPerson();
        cout<<"Enter your score: ";cin>>score;
    }
    void outputStu(){
        outputPerson();
        cout<<"Score: "<<score<<endl;
    }
};


int main(){
    system("cls");

    Person p;
    p.inputPerson();
    p.outputPerson();

    Student s;
    s.inputStu();
    s.outputStu();

    return 0;
}