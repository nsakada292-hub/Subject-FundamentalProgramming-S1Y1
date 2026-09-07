#include<iostream>
using namespace std;

int main(){
    system("cls");

    int grade;
    char gender;
    cout<<"Enter your grade: ";cin>>grade;
    cout<<"Enter your gender: ";cin>>gender;

    if(gender=='f'){
        if(grade==12){
            cout<<"You are able to apply."<<endl;
        }else{
            cout<<"You are not in grade 12, Cannot apply."<<endl;
        }
    }else{
        cout<<"You cannot apply, Only female able to apply."<<endl;
    }


    return 0;
}