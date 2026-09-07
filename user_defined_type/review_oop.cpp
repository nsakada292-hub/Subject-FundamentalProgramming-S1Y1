#include<iostream>
using namespace std;


class Student{
    protected:
    int id;
    string name;
    int age;

    public:
    Student(){
        id=0;
        age=0;
        name="anonymous";
    }
    Student(int id, string name, int age){
        this->id=id;
        this->name=name;
        this->age=age;
    }

    void output(){
        cout<<id<<" - "<<name<<" - "<<age<<endl;
    }

    //setting and getting
    void setAge(int age){
        if(age<=0){
            cout<<"⚠ Age amount is invalid ‼"<<endl;
            return;
        }
        this->age=age;
    }
    int getAge(){
        return age;
    }
};

class InternationalStudent : public Student{
    public:
    string country;
    string email;

    // Override
    InternationalStudent(){}
    InternationalStudent(int id, string name, int age, string country, string email) : Student(id, name, age){
        this->country=country;
        this->email=email;
    }

    void output(){
        Student::output();
        cout<<" - "<<country<<" - "<<email<<endl;
    }
};


int main(){
    system("cls");


    Student stu1(1001, "Sakada", 19);
    stu1.output();

    InternationalStudent iStudent1(1002, "Ahpoy", 20, "Cambodia", "sdfkfbg@gmail.com");
    iStudent1.output();

    return 0;
}

