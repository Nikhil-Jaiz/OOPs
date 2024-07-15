//Static Data Member belongs to class 
//and there is no need to create object for those data_member
#include<bits/stdc++.h>
using namespace std;
class Hero
{
    public:
  int health;
  char level;
  static  int Time_to_Complete;

  void Display()
  {
    cout<<"This is a Method of Class"<<endl;
  }
  Hero()
  {
    cout<<"Inside Constructor"<<endl;
  }

};

int Hero::Time_to_Complete=15;

int main()
{
  cout<<Hero::Time_to_Complete<<endl;
}

// agar Class ke kisi member ko access karna hai bina object bnaye to ham scope resolution operator ka istemal karenge 