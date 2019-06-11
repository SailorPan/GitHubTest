#ifndef HELLOWORLD_H
#define HELLOWORLD_H
#include<iostream>
using namespace std;

class HelloWorld
{
public:
    HelloWorld();
    virtual ~HelloWorld();
    void setName(string _name)
    {
        name = _name;
    }
    void setAge(int _age)
    {
        age = _age;
    }
    void print()
    {
        cout << "This hs's name is " << this->name << ", "<<"age is " << this->age;
    }

private:
    string name;
    int     age;
};

#endif // HELLOWORLD_H
