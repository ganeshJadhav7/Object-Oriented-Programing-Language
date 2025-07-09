#include<iostream>
using namespace std;

class base
{
public:
    void multiply(int a, int b)
    {
        cout<<"Base multiply : "<<a*b<<endl;
    }
};

class derived : public base
{
public:
    void multiply(int a, int b)
    {
        cout<<"Derived multiply : "<<a<<" * "<<b<<" = "<<a*b<<endl;
    }
};

int main()
{
    base obj1;
    obj1.multiply(6, 2);
    derived obj2;
    obj2.multiply(4, 5);
    return 0;
}