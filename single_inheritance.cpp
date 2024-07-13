#include<bits/stdc++.h>
using namespace std;
class Animal
{ 
    public:
    string color;
    void bark()
    {
        cout<<"Animal is Barking"<<endl;
    }

};
class Dog :public  Animal
{
    public:
    int age;

    void sleep()
    {
        cout<<"Dog is Sleeping"<<endl;
    }

};
int main()
{
   Dog  d; 
   d.bark();
   d.sleep();
   return 0;
}