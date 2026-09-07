#include<iostream>
using namespace std;


// void guessEvenOdd(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<"is ";

//         if(arr[i]%2==0){
//             cout<<"Even"<<endl;
//         }else{
//             cout<<"Odd"<<endl;
//         }
//     }
// }


void guessEvenOdd(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"is ";

        if(arr[i]%2==0){
            cout<<"Even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }
    }
}



int main(){
    system("cls");

    int arr[]={11, 22, 33, 44, 55};
    int size=5;

    guessEvenOdd(arr, size);




    return 0;
}
