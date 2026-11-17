#include<iostream>
using namespace std;
class Book
{
public:
string name;
Book(string n)
{
name= n;
}
Book(Book & b)
{
name=b.name;
}
void display()
{
cout<<"the name ofbook is:"<<name;
}
};
int main()
{
Book b1("ikigai");
Book b2(b1);
b1.display();
b2.display();
return 0;
}
