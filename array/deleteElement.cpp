#include<iostream>
using namespace std;
// Size = Total amount of elements in the array.
void printarray(int scores[], int size){
    cout<<"Array Element are: "<<endl;
    for(int i=0; i<size; i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
}
// This function deletes the target element from the array and returns the new size of the array.
int deleteElement(int scores[], int size, int target){
    int Index = 0;
    for(int i=0; i<size; i++){
        if(scores[i] != target){
            scores[Index++] = scores[i];
        }
    }
    return Index;
}
int main(){
    system("cls");
    int scores[]={100, 200, 300, 400, 500};
    int size=sizeof(scores)/sizeof(scores[0]);
    printarray(scores, size);

    // Delete the element with value 300 from the array
    int target = 300;
    cout<<"Target is: "<<target<<endl;
    size = deleteElement(scores, size, target);
    printarray(scores, size);
    cout<<endl;
    return 0;
}
