#include<iostream>
using namespace std;

int main(){
    system("cls");


    int arr[5]={12,13,14,15,16};
    int even=0, odd=0;

    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Even have: "<<even<<endl;
    cout<<"Odd have; "<<odd<<endl;

    return 0;
}