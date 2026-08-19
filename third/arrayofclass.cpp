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
      rollnumber=0;
      name="0";
      marks=0;
    }
   // creating constructor to take input values(Parameterized constructor)
   Student(int r,string n,int m){
      rollnumber=r;
      name=n;
      marks=m;
   }
   // creating display function to display this information
   void display(){
    
      cout<<"Roll Number: "<<rollnumber<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Marks: "<<marks<<endl;
   }
};

   int main(){
      Student student[7];
      for(int i=0; i<7;i++) {
          student[0] = Student(72, "Manvi", 100);
          student[1] = Student(73, "Mayank",99);
          student[2] = Student(74, "Monika", 98);
          student[3] = Student(75, "Naitik", 97);
          student[4] = Student(76, "Nema", 96);
          student[5] = Student(77, "Ojasvi", 95);
          student[6] = Student(78, "Sankar", 94);
          student[i].display();
      }
   return 0;
} 