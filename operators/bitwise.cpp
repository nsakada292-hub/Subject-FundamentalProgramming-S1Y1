#include<iostream>
using namespace std;

int main(){
    system("cls");

    int a=2, b=3;
    int result=a|b;
    cout<<"Result: "<<result<<endl;

    int result1=a&b;
    cout<<"Result 1: "<<result1<<endl;

    int result2=a<<2;
    cout<<"Result 2: "<<result2<<endl;

    int result3=b<<2;
    cout<<"Result 3: "<<result3<<endl;


    return 0;
}