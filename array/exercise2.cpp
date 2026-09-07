#include<iostream>
using namespace std;

int main(){
    system("cls");


    int n{};
    cout<<"Total of name: ";cin>>n;

    if(n<=0){
        cout<<"Number of name must be greater than 0."<<endl;
    }

    string stuName[n];
    for(int i=0; i<n; i++){
        cout<<"Enter your name "<<(i+1)<<" : ";cin>>stuName[i];
    }
    cout<<endl;

    int size=sizeof(stuName)/sizeof(stuName[0]);

    cout<<"All name: ";
    for(int i=0; i<size; i++){
        cout<<stuName[i]<<" ";
    }
    cout<<endl;
    // int size=sizeof(stuName)/sizeof(stuName[0]);

    string item;
    bool isFound=false;

    //search
    cout<<"Find index of name: ";cin>>item;

    for(int i=0; i<size; i++){
        if(item==stuName[i]){
            isFound=true;
            cout<<stuName[i]<<" found in index: "<<i;
        }
    }
    cout<<endl;

    if(isFound==false){
        cout<<"This name not found in array."<<endl;
    }


    //update
    cout<<"Name to update: ";cin>>item;

    for(int i=0; i<size; i++){
        if(item==stuName[i]){
            isFound=true;
            // cout<<stuName[i]<<" found in index: "<<i;
            cout<<"Enter new name: ";cin>>stuName[i];
        }
    }
    cout<<endl;

    if(isFound==false){
        cout<<"Cannot update."<<endl;
    }
    cout<<endl;

    cout<<"All name after update: ";
    for(int i=0; i<size; i++){
        cout<<stuName[i]<<" ";
    }

    return 0;
}