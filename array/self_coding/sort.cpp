#include<iostream>
using namespace std;

int main(){
    system("cls");


    int size{};
    int arr[]={9,8,7,6,2,1,12,13,3,4,5,14,15,11,10};
    size=sizeof(arr)/sizeof(arr[0]);

    cout<<"All value before sort: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "All value after sort: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }



    return 0;
}