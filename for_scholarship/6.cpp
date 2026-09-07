#include<iostream>
using namespace std;

int main(){
    system("cls");

    int arr[]={12,35,67,8,3,78,35,47,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<"Sorting array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}