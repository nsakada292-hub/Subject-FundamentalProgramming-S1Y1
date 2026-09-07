#include<iostream>
using namespace std;

// float findAverage(float math, float eng, float cpp){
//     return (math+eng+cpp)/3;
// }

// char findGrade(float avg){
//     char grade;
//     if(avg>=90) grade ='A';
//     else if(avg>=80) grade ='B';
//     else if(avg>=70) grade ='C';
//     else if(avg>=60) grade ='D';
//     else if(avg>=50) grade ='E';
//     else grade ='F';
//     return grade;                                  // trv jam yg trv return jg lhot 
// }

struct student{
    string name, classroom;
    char gender;
    float math, eng, cpp, avg;

    float findAverage(float math, float eng, float cpp){
    return (math+eng+cpp)/3;
}

char findGrade(float avg){
    char grade;
    if(avg>=90) grade ='A';
    else if(avg>=80) grade ='B';
    else if(avg>=70) grade ='C';
    else if(avg>=60) grade ='D';
    else if(avg>=50) grade ='E';
    else grade ='F';
    return grade;                                  // trv jam yg trv dak ah return ng jg lhot 
}

void input(){
cout<<"=============================================="<<endl;
cout<<"----------x Input your information x----------"<<endl;
cout<<"=============================================="<<endl;
cout<<"Enter Your Fullname: ";getline(cin, name);
cout<<"Enter Your Classroom: ";getline(cin, classroom);
cout<<"Enter Your Gender: ";cin>>gender;
cout<<"Enter Your Math Score: ";cin>>math;
cout<<"Enter Your English Score: ";cin>>eng;
cout<<"Enter Your C++ Score: ";cin>>cpp;
}

void output(){
cout<<"=============================================="<<endl;
cout<<"----------x Output your information x---------"<<endl;
cout<<"=============================================="<<endl;
float average=findAverage(math, eng, cpp);
cout<<"Grade: "<<findGrade(average)<<endl;
cout<<"Fullname: "<<name<<endl;
cout<<"Classroom: "<<classroom<<endl;
cout<<"Gender: "<<gender<<endl;
cout<<"Student Average: "<<average<<endl;
cout<<"===============<< Thank You! >>==============="<<endl;
}
};

int main(){
    system("cls");

// string name, classroom;
// char gender;
// float math, eng, cpp, avg;

// cout<<"=============================================="<<endl;
// cout<<"----------x Input your information x----------"<<endl;
// cout<<"=============================================="<<endl;
// cout<<"Enter Your Fullname: ";getline(cin, name);
// cout<<"Enter Your Classroom: ";getline(cin, classroom);
// cout<<"Enter Your Gender: ";cin>>gender;
// cout<<"Enter Your Math Score: ";cin>>math;
// cout<<"Enter Your English Score: ";cin>>eng;
// cout<<"Enter Your C++ Score: ";cin>>cpp;

// avg=(math+eng+cpp)/3;

// cout<<"=============================================="<<endl;
// cout<<"----------x Output your information x---------"<<endl;
// cout<<"=============================================="<<endl;
// float average=findAverage(math, eng, cpp);
// cout<<"Grade: "<<findGrade(average)<<endl;
// cout<<"Fullname: "<<name<<endl;
// cout<<"Classroom: "<<classroom<<endl;
// cout<<"Gender: "<<gender<<endl;
// cout<<"Student Average: "<<average<<endl;
// cout<<"===============<< Thank You! >>==============="<<endl;


student stu1;
stu1.input();
stu1.output();



    return 0;
}