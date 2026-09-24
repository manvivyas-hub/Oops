#include <iostream>
using namespace std;
class Student{
    // private information
     string name;
     string rollnumber;
     float CGPA;
     // public information
     public:
    // creating constructor
    Student(){
        name="0";
        rollnumber="0";
        CGPA=0;
    }
    //creating parameterized constructor
    Student(string n,string r , float c ){
        name=n;
        rollnumber=r;
        CGPA=c;
    }
    void display(){
        cout<<"\nName:"<<name;
        cout<<"\nRoll Number:"<< rollnumber;
        cout<<"\nCGPA:"<<CGPA;
    }
};
int main(){
    int size;
    cout<<"Enter the number of students:";
    cin>>size;
    Student student[size];
    for(int i=0;i<size;i++){
         string n,r;
          float c;
            cout<<"\nEnter the Name , Roll Number and CGPA of the"<< i+1<<" "<< "student:";
            cin>>n>>r>>c;
            student[i]=Student(n,r,c);
    }
    for(int i=0; i<size;i++){
        student[i].display();
    }
    return 0;
}
