#include<bits/stdc++.h>
using namespace std;
class Hero
{
    public:
    int health;
    char level;

    void print()
    {
        cout<<health<<endl;
        cout<<level<<endl;
    }
};
int main()
{
  Hero niks;
  cout<<sizeof(niks)<<endl;  //why ans is 8 AND not 5
  niks.health=92;
  niks.level='C';
  niks.print();
  return 0;
}