#include<iostream>
using namespace std;
class Calculator
{
public:
int add(int a,int b)
{
return a+b;
}
int add(int a,int b,int c)
{
return a+b+c;
}
};
int main()
{
Calculator c;
cout<<"The addition of first is"<<c.add(6,7);
cout<<"The addition of second is"<<c.add(6,7,8);
return 0;
}
