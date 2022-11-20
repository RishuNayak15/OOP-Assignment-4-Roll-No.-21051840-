
#include <bits/stdc++.h>
using namespace std;

// base class declaration with private and public access specifier and also with constructor and destructor
class BaseClass
{
protected:
    int a;
public:
    BaseClass()
    {
        cout << "Base class constructor" << endl;
    }
    ~BaseClass()
    {
        cout << "Base class destructor" << endl;
    }
};

// derived class declaration 
class DerivedClass : public BaseClass
{

protected:
    int b;

public:

    DerivedClass()
    {
        cout << "Derived class constructor " << endl;
    }

    ~DerivedClass()
    {
        cout << "Derived class destructor " << endl;
    }

    // friend function declaration
    friend void fun(DerivedClass &d);

    // inline function declaration
    inline void fun1()
    {
        cout << "Inline function" << endl;
    }

    // operator overloading
    void operator+(DerivedClass &d)
    {
        cout << "Operator overloading" << endl;
    }

    // function overloading
    void fun2(int a)
    {
        cout << "Function overloading" << endl;
    }

    // function overriding

    void fun3()
    {
        cout << "Function overriding" << endl;
    }

    // virtual function
    virtual void fun4()
    {
        cout << "Virtual function" << endl;
    }

    // polymorphism
    void fun5()
    {
        cout << "Polymorphism" << endl;
    }
};


// friend function definition
void fun(DerivedClass &d)
{
    cout << "Friend function" << endl;
}


int main()
{
    DerivedClass d;

    fun(d);     // friend function calling
    d.fun1();    // inline function calling
    d + d;     // operator overloading calling 
    d.fun2(1);    // function overloading calling

    d.fun3();    // function overriding calling
 
    d.fun4();    // virtual function calling

    d.fun5();   // polymorphism calling

    return 0;
}

