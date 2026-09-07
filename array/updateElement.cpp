#include<iostream>
using namespace std;



void printArray(int scores[], int size){
    // cout array
    cout<<"Array element are: ";
    for(int i=0; i<size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;

}

void search(int scores[], int size){
    //search
    int search{};
    bool isFound=false;
    cout<<"Search array element: ";cin>>search;
    for(int i=0; i<size; i++){
        if(scores[i]==search){
            isFound=true;
            cout<<scores[i]<<" is in index "<<i<<endl;
        }
    }
    cout<<endl;
    if(isFound==false){
        cout<<"Cannot found."<<endl;
    }
}


int main(){
    system("cls");


    // initialize
    int scores[]={10,11,12,13,14,15,16};

    int size=sizeof(scores)/sizeof(scores[0]);

    // printArray(scores, size);


    // update
    int target{},newIndex{};
    cout<<"Update array: ";cin>>target;
    
    for(int i=0; i<size; i++){
        if(scores[i]!=target){
            scores[newIndex++]=scores[i];
        }
    }
    size=newIndex;
    cout<<endl;

    printArray(scores, size);


    return 0;
}