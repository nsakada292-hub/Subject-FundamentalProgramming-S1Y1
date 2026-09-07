#include<iostream>
using namespace std;


class Person{

    // access modofier
    public:
        string name;
        string gender;
        int age;

    // constructor
    Person(){}
    Person(string name, string gender, int age){
        this->name=name;
        this->gender=gender;
        this->age=age;
    }

    void output(){
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
    }
};


int main(){
    system("cls");

    // Create object
    Person person1("Sakada", "Male", 19);
    person1.output();


    return 0;
}