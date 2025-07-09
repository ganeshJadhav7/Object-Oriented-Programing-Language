#include<iostream>
using namespace std;

//demo function.
int demo()
{
    cout<<"demo Function."<<endl;
}

// addition function to add two numbers.
int add(int num1, int num2)
{
    int sum = num1 + num2;
    cout<<"Sum of num1 and num2 : "<<sum<<endl;
}

// substraction function of two numbers
int sub(int num1, int num2)
{
    int sub = num1 - num2;
    cout<<"Substraction of num1 and num2 : "<<sub<<endl;
}

// multiplication function of two numbers
int multiplication(int num1, int num2)
{
    int multp = num1 * num2;
    cout<<"multiplication of num1 and num2 : "<<multp<<endl;
}

// division function of two numbers
int division(int num1, int num2)
{
    int division = num1 / num1;
    cout<<"division of num1 and num2 : "<<division<<endl;
}


int main()
{
    demo();// calling demo function
    int num1 = 6, num2 = 2;  
    add(num1, num2); // calling add function
    sub(num1, num2); // calling substraction function
    multiplication(num1, num2); // calling multiplication function
    division(num1, num2); // calling division function
}
