#include<bits/stdc++.h>
using namespace std;
// class Nikhil
// {
//   public:
//   int age;
//   string color;
//   string height;

//    Nikhil()
//    {
//     cout<<"Constructor called"<<endl;
//    }
// };

class Hero{
    public:
    int data;
   char height;
  //concept of Parameterised Constructor
  Hero(int dt,char ch)
  {
    this->data=dt;
    this->height=ch;
  }

};
//Concept of Copy Constructor
int main()
{
   
    Hero Ramesh(10,'C');
    cout<<Ramesh.data<<" "<<Ramesh.height<<  endl;


    Hero Suresh(Ramesh);
    //meaning is Suresh->health =Ramesh->health and all data member will be same

 cout<<Suresh.data<<endl;
 cout<<Suresh.height<<endl;

    


    

}