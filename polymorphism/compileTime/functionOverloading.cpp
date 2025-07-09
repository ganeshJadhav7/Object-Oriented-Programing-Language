#include<iostream>
using namespace std;

class addition
{
public:
    int add(int num1, int num2)
    {
        cout<<"Addition of two numbers : "<<num1 + num2<<endl;
        return 0;
    }
    int add(int num1, int num2, int num3)
    {
        cout<<"Addition of three numbers : "<<num1 + num2 + num3<<endl;
        return 0;
    }
    int add(int num1, float num4)
    {
        cout<<"Addition of two numbers (float and int) : "<<num1 + num4<<endl;
        return 0;
    }
};

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    float num4 = 40.5;

    addition obj;
    int a = obj.add(num1, num2);
    int b = obj.add(num1, num2, num3);
    int c = obj.add(num1, num4);
}