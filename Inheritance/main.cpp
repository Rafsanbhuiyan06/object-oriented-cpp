#include <iostream>
#include "student.cpp"

using namespace std;

class cat
{
public:
    void color()
    {
        cout<<"Most cat are whit";
    }
};

class dog
{

};
class birds
{

};
class animal: public student
{
public:
    animal()
    {
        getStudent();
    }
    int atte;
};

int main()
{
    animal obj;
    //obj->getStudent();

    return 0;
}
