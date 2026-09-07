#include<iostream>
using namespace std;

int main(){
    system("cls");

    bool found=true;
    int target;

    int arr[]={1,124,3,56,67,788,898,90,5,453,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter your number: ";cin>>target;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            found=true;
            cout<<"Found at index: "<<i<<endl;
        }
    }

    if(!found){
        cout<<"Your number not found!"<<endl;
    }


    return 0;
}