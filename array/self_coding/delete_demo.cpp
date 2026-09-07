#include<iostream>
using namespace std;

int main(){
    system("cls");

    int size{}, target{}, index{};

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<"All value before delete element: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter value to delete: ";cin>>target;
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            // if arr[i]==target --> index = i 
            // if arr[4]==5 --> index = 4 (relate with line 28)
            index = i;break;
        }
    }

    for(int i=index; i<size-1; i++){
        // base on line 22 index = 4 --> for(int i=4; i<size-1; i++)
        arr[i]=arr[i+1];
    }
    // size-- mean like delete the last element
    size--;

    if(index<0){
        cout<<"Value not found"<<endl;
    }

    cout<<"All value after delete element: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}