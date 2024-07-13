#include<bits/stdc++.h>
using namespace std;
class Hero
{
    private:
    int health;
    char level;
   public:
   void setHealth(int h)
   {
    this->health=h;

   }
   int getHealth()
   {
    return this->health;
   }
   void setLevel(char  ch)
   {
    this->level=ch;

   }
   int getLevel()
   {
    return this->level;
   }
};
int main()
{
 Hero niks;
niks.setLevel('D');
niks.setHealth(95);
cout<<niks.getHealth()<<endl;
cout<<niks.getLevel()<<endl;
return 0;
}