//Destructor are used for Memory Deallocation 
//Other points of Destructor are same as that of Constructor
//Constructor and Constructor are differentiated using a Tilda (~) operator


#include<bits/stdc++.h>
using namespace std;
class Hero
{
   public:
   int age;
   int health;
   string name;


   //making a Constructor
   Hero()
   {
    // this->age=age;
    // this->health=health;
    // this->name=name;
    cout<<"Constructor Bhaiya Called"<<endl;

   }
   //making a  Destructor of Hero Class
   ~Hero()
   {
    cout<<"Destructor Bhaiya Called"<<endl;
   }
};
int main()
{
  //creating a Static Object
  Hero obj;

   //creating a Dynamic Object

   Hero *obj2=new Hero();


   //Important Note -For static destructor is automatically called whereas for Dynamic Object it is manually called

   delete obj2;
  return 0;

}