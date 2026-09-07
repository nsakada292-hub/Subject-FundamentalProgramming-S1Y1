#include<iostream>
using namespace std;

int main(){
    system("cls");

    bool isValid=true;
    cout<<" Isvalid is True: "<<isValid<<endl;
    cout<<" Isvalid is false: "<<!(isValid)<<endl;

    int age;
    cout<<"Enter your age to login: ";cin>>age;
    if(age>=18){
        cout<<"Login sucessfully!"<<endl;
    }else{
        cout<<"You under 18."<<endl;
    }


    return 0;
}