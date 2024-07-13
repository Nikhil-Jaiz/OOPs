#include<bits/stdc++.h>
using namespace std;

class Hero
{
     public:
    int health;
    char level;
    string name;
    Hero(int health,char level,string name)
    {
        this->health=health;
        this->level=level;
        this->name=name;
    }
      
};

int main()
{
  Hero A(81,'C',"Babbar");
  Hero B(92,'D',"Gabbar");
   cout<<A.health<<" "<<A.level<<" " <<A.name<<" "<<endl;
  cout<<B.health<<" "<<B.level<<" " <<B.name<<" "<<endl;
 
  //when we write A=B means A.health =B.health;
  A=B;
  cout<<A.health<<" "<<A.level<<" " <<A.name<<" "<<endl;
  cout<<B.health<<" "<<B.level<<" " <<B.name<<" "<<endl;

return 0;
}