#include<bits/stdc++.h>
using namespace std;
//Encapsulation is defined as wrapping of data and functions into a single unit
//For example Class
//Encapsulation refers to data hiding 
//ABstraction refers to implementation hiding
//A fully encapsulated class is one in which the data member are marked as private

class Encaps
{
    public:
    int data;
    string name;

    Encaps(int d,string n)
    {
        this->data=d;
        this->name=n;
    }
};
int main()
{
 Encaps obj(10,"Nikhil");
 cout<<obj.data<<endl;
 cout<<obj.name<<endl;
 return 0;

}

//ADVANTAGES OF ENCAPSULATION
// 1-DATA HIDING
// 2-SECURITY
// 3-CODE REUSABILITY(ALL OOPS)
