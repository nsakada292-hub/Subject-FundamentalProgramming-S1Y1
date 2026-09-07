#include<iostream>
using namespace std;

int main(){
    system("cls");

    int size{},target;
    bool found=true;

    int scores[]={11,12,13,14,15,16,17,18,19};
    size=sizeof(scores)/sizeof(scores[0]);

    cout<<"Target: ";cin>>target;
    for(int i=0; i<size; i++){
        if(scores[i]==target){
            found=true;
            cout<<scores[i]<<" Found at index "<<i<<endl;
        }
    }
    if(!found){
        cout<<"This number not found."<<endl;
    }



    return 0;
}