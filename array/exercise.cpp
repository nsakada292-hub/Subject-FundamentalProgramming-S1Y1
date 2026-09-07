#include<iostream>
using namespace std;

int main(){
    system("cls");


    int n{};
    cout<<"Enter number of score: ";cin>>n;

    if(n<=0){
        cout<<"Number of score must be greater than 0."<<endl;
        return 0;
    }

    float score[n];
    for(int i=0; i<n; i++){
        cout<<"Enter your score "<<(i+1)<<" : ";cin>>score[i];
    }
    cout<<endl;

    cout<<"All of value: "<<endl;
    for(int i=0; i<n; i++){
        cout<<score[i]<<" ";
    }
    cout<<endl;

    float total{};
    // cout<<"Total score: "<<endl;
    for(int i=0; i<n; i++){
        total+=score[i];
    }
    cout<<"Total score: "<<total<<endl;
    
    float avg{};
    avg=total/n;
    cout<<"Average of score: "<<avg<<endl;

    return 0;
}