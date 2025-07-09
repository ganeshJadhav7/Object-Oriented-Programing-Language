#include<iostream>
using namespace std;

class example
{
public:
    int publicvar;
private:
    int privatevar;
protected:
    int protectedvar;
    
public:
    void setValues()
    {
        publicvar = 1; //
        privatevar = 2;
        protectedvar = 3;
    }

    void showvalues()
    {
        cout<<"Public : "<<publicvar<<endl;
        cout<<"private : "<<privatevar<<endl;
        cout<<"protected : "<<protectedvar<<endl;
    }
    
};

int main()
{
    example obj;
    obj.setValues();
    obj.showvalues();

    obj.publicvar = 10;
    //obj.privatevar = 20; // error : you are assigning to private variable.
    //obj.protectedvar = 30; // error : you are assigning to protected variable.
    obj.showvalues();
}