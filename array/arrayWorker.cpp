#include <iostream>
using namespace std;
struct worker
{
    int id;
    string name;
    string gender;
    float salary;
    worker() {}
    // this
    worker(int id, string name, string gender, float salary)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->salary = salary;
    }
    void input()
    {
        cout << "Enter worker id:";
        cin >> id;
        cin.ignore();
        cout << "Enter worker name:";
        cin >> name;
        cout << "Enter gender:";
        cin >> gender;
        cout << "Enter salary:";
        cin >> salary;
    }
    void update(){
        cout<<"Enter new name:";getline(cin,name);
        cout<<"Enter new gender:";cin>>gender;
        cout<<"Enter new salary:";cin>>salary;
    }
    void output()
    {
        cout << id << "." << name << "." << gender << "." << salary << "." << endl;
    }
};
// helper function
void display(worker workers[], int n)
{
    if (n == 0)
    {
        cout << "Not info to display" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            workers[i].output();
        }
    }
}
int search(worker workers[], int n)
{
    int searchId;
    cout << "Enter ID to search :";
    cin >> searchId;
    for (int i = 0; i < n; i++)
    {
        if (workers[i].id == searchId)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    system("cls");
    int n;
    cout << "Enter worker capavity:";
    cin >> n;
    worker workerlist[n];
    int counter = 0;
    int option;
    do
    {
        cout << "-----------------[Worker program]-----------------" << endl;
        cout << "1.Add new worker" << endl;
        cout << "2.Update worker" << endl;
        cout << "3.Delete worker" << endl;
        cout << "4.Show worker" << endl;
        cout << "5.Search worker" << endl;
        cout << "6.Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            if (counter >= n)
            {
                cout << "Capacity is full !" << endl;
            }
            else
            {
                worker worker;
                worker.input();
                workerlist[counter] = worker;
                counter++;
            }
        }
        break;
        case 2:
        {
            if (counter == 0)
            {
                cout << "Worker is empty ! No data to search " << endl;
                break;
            }
            int index = search(workerlist, counter);
            if (index == -1)
            {
                cout << "Result not found!" << endl;
            }
            else
            {
                workerlist[index].output();
            }
        }
        break;
        case 3:
        {
            int index =search(workerlist,counter);
            if(index==-1){
                cout<<"failed to delete , data doesn't exist"<<endl;

            }else{
                for (int i=index; i<counter-1;i++){

                }
                counter--;
                cout<<" ✅ Delete successfully !"<<endl;
            }
        }
            break;
        case 4:
        {
            display(workerlist,counter);
        }
           break;
            
        case 5:
        { 
            if(
                counter==0){
                    cout<<"There is no data to update"<<endl;
                }else{
                    int index =search(workerlist,counter);
                    if(index==-1){
                        cout<<"❎ Result not found! /nCannot update the data"<<endl;
                    }else{
                        worker newworker=workerlist[index];
                        newworker.update();
                        workerlist[index]=newworker;
                        cout<<"✅ Update successfully"<<endl;
                    }
                }

        }
            break;
        case 6:
            cout << "Exit from the program" << endl;

            break;
        }
    } while (option != 6);
    return 0;
}