#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int size{}, target{}, newValue{};

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<"All value before update: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter value to update: ";cin>>target;

    cout<<"Enter new value to replace: ";cin>>newValue;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            // replace arr[i] to newValue, if arr[i]==target 
            arr[i]=newValue;
        }
    }
    cout<<endl;

    cout<<"All value after update: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}