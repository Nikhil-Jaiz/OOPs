// One class inherits the property and behaviour of other class 
//for example human beings inherits property of their parent or ancestors
//for example height face others 
//The class that inherits property is called derived sub or child class
//And the class from which subclass inherits is called parent ,super or base class
//Syntax of INheritance
//class child_class_name: mode_access parent_class_name
//A class in which the data member are marked private can never be inherited


//Protected access modifier means we can access in same class as well as in child class
#include<bits/stdc++.h>
using namespace std;
//Access Modifier is Very Important in Inheritance  
//Public:everywhere
//Protected:ChildClass and  SameClass
//Private :Only inside Same Class


class Prnt 
{
    public:
    int height;
    string color;

    //making  a method and not a constructor

    void Scold()
    {
        cout<<"Parent is scolding";
        cout<<endl;
    }

};
class Chld:public Prnt{
    public:
    string name;
    string standard;

    
    Chld(string name,string standard)
    {
        this->name=name;
        this->standard=standard;
    }
    void Play()
    {
        cout<<"Child is Playing";
        cout<<endl;
        cout<<name<<" "<<standard<<" ";
        cout<<endl;

    }
};
int main()
{
  //making an object of chld class 
  Chld nikhil("jaiswal ji","collg khtm ");

  //Although Chld class does not have scold method bt since it has inherited from parent class we can access it
nikhil.Play();
nikhil.Scold();
return 0;
}