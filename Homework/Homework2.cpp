#include<iostream>
using namespace std;

int main(){
    system("cls");

    string name, room;
    char gender;
    float math, english, cpp, avg;

    cout<<"--------------------------------------------"<<endl;
    cout<<"========[[ Input Your Information ]]========"<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"   [+] Input your name: ";cin>>name;
    cout<<"   [+] Input your gender: ";cin>>gender;
    cout<<"   [+] Input your class: ";cin>>room;
    cout<<"   [+] Input your math score: ";cin>>math;
    cout<<"   [+] Input your english score: ";cin>>english;
    cout<<"   [+] Input your C++ score: ";cin>>cpp;
    
    avg=(math+english+cpp)/3;

    cout<<"--------------------------------------------"<<endl;
    cout<<"===========[[ Your Information ]]==========="<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"   Name: "<<name<<endl;
    cout<<"   Gender: "<<gender<<endl;
    cout<<"   Class: "<<room<<endl;
    cout<<"   Your Average Score: "<<avg<<endl;

    if(avg==90 || avg>90){
        cout<<"Your got a grade: A"<<endl;
    }else if(avg==85 || avg>85){
        cout<<"Your got a grade: B"<<endl;
    }else if(avg==70 || avg>70){
        cout<<"Your got a grade: C"<<endl;
    }else if(avg==60 || avg>60){
        cout<<"Your got a grade: D"<<endl;
    }else if(avg==50 || avg>50){
        cout<<"Your got a grade: E"<<endl;
    }else{
        cout<<"Your got a grade: F"<<endl;
    }
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"==============[[ Thank You. ]]=============="<<endl;
    cout<<"--------------------------------------------"<<endl;
    

    return 0;
}