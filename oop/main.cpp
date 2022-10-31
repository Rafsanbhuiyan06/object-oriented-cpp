/*#include <bits/stdc++.h>
using namespace std;

class student
{
public:

    int id;
    double gpa;

    void display()
    {
        cout<<"id : " <<id<<" GPA : " <<gpa<<endl;
    }
};

int main()
{
    student atik, rakib;

    atik.id = 8;
    atik.gpa = 3.04;
    atik.display();

    rakib.id = 11;
    rakib.gpa = 4.01;
    rakib.display();
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    int id;
    double gpa;
public:
    student(int id, double gpa)
    {
        this->id = id;
        this->gpa = gpa;
        display();
    }
    student(int id)
    {
        this->id = id;
        display();
    }
    void SatValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout<< "id "<<id<< " GPA "<<gpa<<endl;
    }
};

int main()
{
    //student obj(7);
    //obj.display();
    auto a = "str";


    auto *stdnt = new student(7, 5.7);
    cout<<typeid(a).name();
    //stdnt->display();
}
