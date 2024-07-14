// Poly means many and morphs means forms
// It means ability of an entity to exist in Multiple forms
// For example  a Human Being can be  SON,Father,Brother ,Employee and Manager at the same 
// Polymorphism are of two types 
// 1-Compile Time Polymorphism
// 2-RunTime PolyMorphism
// 1-Compile Time Polymorphism are again of Two Types 
//   (i)-Operator Overloading
//   (ii)-Function Overloading 

// 1-FunctionOverloading 

//Functions can be overloaded using no.of Parameter ,DataType of Parameter 
//Function that differ only in return type cannot be overloaded 

#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}
// Function that differ only in return type cannot be overloaded 
// string add(int a,int b)
// {
//     return to_string(a) + to_string(b);
// }

int add(int a,int b,string c)
{
    return a+b + stoi(c);
}
int main()
{
    int ans=add(10,20);
    cout<<ans<<endl;
    int ans2=add(10,20,30);
    cout<<ans2<<endl;
    int ans3=add(10,30,"40");
    cout<<ans3<<endl;
 
return 0;
}
