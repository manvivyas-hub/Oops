#include <iostream>
#include<string>
using namespace std;
class Student {
   // private information
   int rollnumber;
   string name;
   int marks;
   // for public information
   public:
   // creating a constructor
    Student(){
      cout<<"Enter roll number, name and marks of student"<<endl;
      cin>>rollnumber>>name>>marks;
    }
   // creating constructor to take input values(Parameterized constructor)
   
   // creating display function to display this information
   void display(){
    
      cout<<"Roll Number: "<<rollnumber<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Marks: "<<marks<<endl;
   }
};

   int main(){
      int size;
      cout<<"Enter number of students:"<<endl;
      cin>>size;
      Student student[size];

      for(int i=0; i<size;i++) {
         student[i];
         
         
          student[i].display();
      }
   return 0;
} 