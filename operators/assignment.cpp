#include<iostream>
using namespace std;

int main(){
    system("cls");

    int a=10;
    cout<<"Original value a ="<<a<<endl;
    cout<<"a+=10 is "<<(a+=10)<<endl;
    cout<<"a-=10 is "<<(a-=10)<<endl;
    cout<<"a*=10 is "<<(a*=10)<<endl;
    cout<<"a/=10 is "<<(a/=10)<<endl;
    cout<<"a%=10 is "<<(a%=10)<<endl;

    return 0;
}