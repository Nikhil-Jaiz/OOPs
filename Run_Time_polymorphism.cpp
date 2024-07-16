//Run Time polymorphism takes place at the run time
//For Run Time polymorphism we have the following conditions
//1-The method of Parent class and Child class should have the same name
//2- Parent class and child class method should have same number of paramater
//3-Run Time Polymorphism can be achieved only through Inheritance.
#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    void Speaking()
    {
        cout<<"Animal is Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void Speak()
    {
        cout<<"Barking"<<endl;
    }
    void Display()
    {
        cout<<"This is a Animal Class"<<endl;
    }
};
int main()
{
 Dog obj;
obj.Display();
obj.Speak();
return 0;
}
