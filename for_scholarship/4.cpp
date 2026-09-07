#include<iostream>
using namespace std;

int main(){
    system("cls");


    // int arr[5]={10, 50, 30, 90, 20};
    // int max=arr[0];
    
    // for(int i=0; i<5; i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }

    // cout<<"Max: "<<max<<endl;

    int arr[5]={2,3,5,66,7};

    int max=arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"Max: "<<max<<endl;

    return 0;
}