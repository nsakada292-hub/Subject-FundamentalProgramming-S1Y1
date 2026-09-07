#include<iostream>
using namespace std;

int main(){
    system("cls");

    string student_name, classroom;
    char gender;

    float math, eng, cpp, avg;

    cout<<"=======Input Student Info======="<<endl;
    cout<<"Enter name :";cin>>student_name;
    cout<<"Enter gender :";cin>>gender;
    cout<<"Enter classroom";cin>>classroom;
    cout<<"Enter math :";cin>>math;
    cout<<"Enter english :";cin>>eng;
    cout<<"Ënter CPP :";cin>>cpp;

    avg =(math+eng+cpp)/3;

    cout<<"=======Output Student Info======="<<endl;
    cout<<"Name :"<<student_name<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"Classroom :"<<classroom<<endl;
    cout<<"(Math ,Eng ,CPP) :"
        <<math<<","
        <<eng<<","
        <<cpp<<endl;
    cout<<"Average :"<<avg<<endl;
    return 0;
}