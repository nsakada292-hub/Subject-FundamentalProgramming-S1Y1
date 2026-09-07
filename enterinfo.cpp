#include<iostream>
using namespace std;

int main(){
    const int CODE=9999;
    system("cls");

    string username;
    int password;
    

    cout<<"========Welcome========"<<endl;

    cout<<"Enter your username: ";cin>>username;
    cout<<"Enter your password: ";cin>>password;

    if(password==CODE && username=="admin"  )
    {
        cout<<"Login correctly"<<endl;
    }else{
        cout<<"Incorrectly cendentials"<<endl;
    }
    

    return 0;
}