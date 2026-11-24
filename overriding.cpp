#include<iostream>
using namespace std;
class Animal
{
public:
void eat()
{
cout<<"animal eats"<<endl;
}
};
class Dog:public Animal
{
public:
void eat()
{
cout<<"dog eats"<<endl;
}
};
int main()
{
Animal a;
Dog d;
a.eat();
d.eat();
return 0;
}
