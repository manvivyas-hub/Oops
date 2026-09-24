#include <iostream>
#include<string>
using namespace std;
class Employee{
    public:
    char name[50];
    char id[50];
    void getdata(){
       cout<<"Enter the name of the employee:" ;
       cin>>name;
       cout<<"Enter the id of the employee:";
       cin>>id;
    }
    friend void display(){

    }
};
void display(const Employee &obj){
    cout<<"\nName of the employee is"<<" "<<obj.name;
    cout<<"\nId of the employee is"<<" "<< obj.id;
}
int main(){
    int num;
    cout<<"Enter the number of employees:";
    cin>>num;
    Employee E[num];
    for(int i=0;i<num;i++){
        E[i].getdata();
    }
    for(int i=0; i<num; i++){
        display(E[i]);
    }
    return 0;
}