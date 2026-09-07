#include<iostream>
using namespace std;

int main(){
    system("cls");

    int arr[9]={11,2,3,4,6,5,7};
    int sum=0;

    for(int i=0; i<9; i++){
        sum+=arr[i];
    }

    cout<<"Sum of array is: "<<sum<<endl;

    return 0;
}