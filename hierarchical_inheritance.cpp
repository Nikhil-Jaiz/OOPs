//In hierarchical Inheritance one class server as a Parent class for more than one child class 
//means A is the superclass and Subclass B and subclass C both will inherit properties from superclass A
//Also Note that there is no relation between class B and class C
#include<bits/stdc++.h>
using namespace std;

class A 
{
    public:
    string n1;
    string n2;
    int data;

    void superClass()
    {
        cout<<"This is SuperClass"<<endl;
    }
};
class B:public A{
    public:
    void subClass1()
    {
        cout<<"This is Subclass B"<<endl;
    }
};

class C :public  A{
    public:
    void subClass2()
    {
        cout<<"Inheriting Property from superClass A"<<endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.superClass();
    obj1.subClass1();
    obj2.superClass();
    obj2.subClass2();


    //no relation/inheritance between Class b and Class C
    // obj1.subClass2(); this will throw an error

}