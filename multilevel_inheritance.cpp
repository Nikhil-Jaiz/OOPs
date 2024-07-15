#include<bits/stdc++.h>
using namespace std;

class GP
{
    public:
    int height;
    string way;

    void Love()
    {
        cout<<"Grand Parents always takecares of their young one"<<endl;
    }

};
class Parents:public GP
{
    public:
    int age;
    string personality;

    void Love()  //writing same method name as that of Parent class is example of run-time polymorphism (method overidding)
    {
        cout<<"Parents scold for the benefits of their children"<<endl;
    }

};

class Children:public Parents
{

    public:
    string name;
    int height;

    void Play()
    {
        cout<<"Children enjoy playing"<<endl;
    }

};
int main()
{
    Children obj;

    obj.Love();
    obj.Play();
 
return 0;
}