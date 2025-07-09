#include<iostream>
using namespace std;

class Franchise
{
public:
    void kfc()
    {
        cout<<"We hava the best chicken"<<endl;
    }
    void burgerking()
    {
        cout<<"We have the best burgers."<<endl;
    }

private:
    void mcdonalds()
    {
        cout<<"We have best chicken and burgers also."<<endl;
    }

protected:
    void sahuji()
    {
        cout<<"We have best biryani."<<endl;
    }
};


int main()
{
    Franchise obj1;
    obj1.kfc();
    obj1.burgerking();
    //obj1.mcdonalds();  // it will shows the error because mcdonalds is a private function.
    //obj1.sahuji();  // it will shows the error because sahuji is a private function.
}