#include <iostream>
using namespace std;
//single inheritence
//Animal is the parent or base class
class Animal{
    public:
    void eat(){
        cout<<"Animal eats."<<endl;
}
};
//Cat is the child or derieved class
class Cat:public Animal{
    public:
    void grooms(){
        cout<<"Cat grooms itself."<<endl;
    }
};

// multilevel inheritence
class Vehicle{
    public:
    void starts(){
        cout<<"Vehicle starts."<<endl;
    }
};
class FourWheeler: public Vehicle{
    public:
    void drive(){
        cout<<"Four wheeler drives."<<endl;
    }
};
class Car:public FourWheeler{
    public:
    void accelerate(){
      cout<<"Car accelerates"<<endl;
    }
};
//multiple inheritence
class Father{
    public:
    void hobby(){
        cout<<"Father's hobbies are running and cooking."<<endl;
    }
};
class Mother{
    public:
    void hobby(){
        cout<<"Mother's hobbies are playing badminton and freefire."<<endl;
    }
};
class Child: public Father, public Mother{
    public:
    void hobby(){
        cout<<"Child's hobbies are playing badminton and swimming."<<endl;
    }
};
//hierarchical inheritence
class Bird{
    public:
    void fly(){
        cout<<"Some birds can fly and some cannot."<<endl;
    }
};
class FlyingBirds:public Bird{
    public:
    void canfly(){
        cout<<"These birds can fly."<<endl;
    }
};
class CannotFlyBirds:public Bird{
    public:
    void cannotfly(){
        cout<<"These birds cannot fly."<<endl;
    }
};
//hybrid inheritence
class Person{
    public:
    void display(){
        cout<<"This is a person."<<endl;
    }
};
class Teacher:virtual public Person{
    public:
    void teach(){
        cout<<"This person teaches."<<endl;
    }
};
class Student:virtual public Person{
    public:
    void study(){
        cout<<"This person studies."<<endl;
    }
};
class GoodHumanBeing: public Teacher, public Student{
    public:
    void deed(){
        cout<<"This person performs good deeds."<<endl;
    }
};
int main(){
    cout<<"Single inheritence"<<endl;
    Cat c;
    c.eat();
    c.grooms();
    cout<<"\nMultilevel inheritence"<<endl;
    Car ca;
    ca.starts();
    ca.drive();
    ca.accelerate();
    cout<<"\nMultiple inheritence"<<endl;
    Child baby;
    baby.Father::hobby();
    baby.Mother::hobby();
    baby.hobby();
    cout<<"\nHierarchical inheritence"<<endl;
    FlyingBirds fb;
    CannotFlyBirds cfb;
    fb.fly();
    fb.canfly();
    cfb.fly();
    cfb.cannotfly();
    cout<<"\nHybrid inheritence"<<endl;
    GoodHumanBeing ghb;
    ghb.display();
    ghb.teach();
    ghb.study();
    ghb.deed();
    return 0;
}
