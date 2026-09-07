#include<iostream>
using namespace std;



struct Student{
    string name,gender,classroom;
    float score;

    Student(){}
    Student(string n, string g, string c, float s){
        name=n;
        gender=g;
        classroom=c;
        score=s;
    }

    void input(){
        cout<<"================================"<<endl;
        cout<<"           INPUT INFO           "<<endl;
        cout<<"================================"<<endl;
        cout<<"Enter name: ";getline(cin, name);
        cout<<"Enter gender: ";cin>>gender;
        cout<<"Enter classroom: ";cin>>classroom;
        cout<<"Enter score: ";cin>>score;
        cin.ignore();
    }

    void output(){
        cout<<"================================"<<endl;
        cout<<"           OUTPUT INFO          "<<endl;
        cout<<"================================"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gender"<<gender<<endl;
        cout<<"Classroom: "<<classroom<<endl;
        cout<<"Score: "<<endl;
    }

};



int main(){
    system("cls");


Student students[4];
students[0].input();
students[1].input();
students[2].input();
students[3].input();

students[0].output();
students[1].output();
students[2].output();
students[3].output();


    return 0;
}