#include<iostream>
using namespace std;

int main(){
    system("cls");

    // index = id of element
    int scores[5];


    // assign
    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40;
    scores[4]=50;

    cout<<"All value of score"<<endl;
    for(int i=0; i<5; i++){
        cout<<scores[i]<<endl;
    }


    return 0;
}