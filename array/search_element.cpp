#include<iostream>
using namespace std;

int main(){
    system("cls");


    int scores[]={12,13,14,15,23,24,25};
    int size=sizeof(scores)/sizeof(scores[0]);

    cout<<"Total element: "<<size<<endl;

    int totalElement;
    cout<<"All value: ";
    for(int i=0; i<size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    // cout<<"All value: "<<scores[i]<<endl;

    bool isFound=false;
    int item;
    cout<<"Find item in array: ";cin>>item;

    for(int i=0; i<size; i++){
        if(item==scores[i]){
            isFound=true;
            cout<<"Item found in idex: "<<i<<endl;
        }
    }
    if(isFound==false){
        cout<<"Item "<<item<<" not found."<<endl;
    }



    return 0;
}