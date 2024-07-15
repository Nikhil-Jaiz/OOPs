//static functions belong to class
//there is no need to create an object for static functions
//static functions can access only static data member
//this keyword is not present in static data member
#include<bits/stdc++.h>
using namespace std;
class Hero
{
  public:
  int health;
  char level;
   static int Time_to_Completee;

  void display()
  {
    cout<<"Inside Hero class"<<endl;
  }
  static void Concept()
  {
    cout<<"Learning Static Data Functions"<<endl;
    // cout<<health<<endl;  we can access only static data member inside a static functions
    cout<<Time_to_Completee<<endl;
  }
  
};
int Hero::Time_to_Completee=15;

int main()
{
 Hero::Concept();
}