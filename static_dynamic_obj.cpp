#include<bits/stdc++.h>
using namespace std;
class Hero{
public:
int health;
char level;


  void print()
  {
    cout<<"Health is"<< health<<" ";
    cout<<endl;
    cout<<"Level is"<<level;
    cout<<endl;
  }
};
int main()
{
    //static object creation and accessing 
 Hero a;
a.print();

//dynamic object creation and accessing
Hero *b;
(*b).print();
b->print();
return 0;
}