#include<iostream>
#include<string>
using namespace std;


class Person{
    
    // Encapsulation
    public:
    string name;
    int age;
    string gender;

    Person(){}
    Person(string name, int age, string gender){
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    void input(){
        cout<<"Enter name: "; getline(cin, name);
        cout<<"Enter age: "; cin>>age; 
        cout<<"Enter gender: "; cin>>gender;
        cin.ignore(); 
    }
    void output(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

// Inheritance
class Student : public Person{
    public:
    string classroom;
    double score;

    // Function override 
    void input(){
        Person::input();
        cout<<"Eneter classroom: "; cin>>classroom;
        cout<<"Enetr score: "; cin>>score;
        
    }
    void output(){
        Person::output();
        cout<<"Classroom: "<<classroom<<endl;
        cout<<"Score: "<<score<<endl;
    }
};

// class Worker : public Person{
//     public:
//     float salary;
// };


int main(){
    system("cls");

    Person person1;
    person1.input();
    person1.output();

    Student stu1;
    stu1.input();
    stu1.output();


    return 0;
}