//Combination of two or more than two types of inheritance is known as Hybrid Inheritance
//For example ->Multiple Inheritance + Single Inheritance 

#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
// In mutliple Inheritance we will see the concept of Inheritance Ambiguity
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
class Parents
{
    public:
    int age;
    string personality;

    void Love()
    {
        cout<<"Parents scold for the benefits of their children"<<endl;
    }

};
class Single{
    public:
    void Display()
    {
        cout<<"Inheriting through Single Inheritance"<<endl;
    }

};

class Hybrid:public Parents,public GP,public Single
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
    Hybrid obj;
   

    // obj.Love();
    //   The error occurs because of ambiguity in the method call. In the Children class,
    //  you inherit from both Parents and GP classes. Both of these parent classes have a 
    //  method named Love(). When you call obj.Love(), the compiler cannot determine 
    //  whether you want to call the Love() method from the Parents class or the GP class.
    //   This situation is known as the "diamond problem" or inheritance ambiguity.
    


  //The Problem to above Diamond Problem is Scope Resolution Operator (::)
        obj.Parents::Love();
        obj.GP::Love();
         obj.Play();
         obj.Display();
 
return 0;
}
