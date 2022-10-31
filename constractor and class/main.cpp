#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    student(int id, double gpa)
    {
        this->id = id;
        this->gpa = gpa;
        print();
    }
    void print()
    {
        int sum = id + gpa;
        cout<<" The sum is "<<sum;
        cout<<" id "<<id<<" gpa "<<gpa<<endl;
    }
};
int main()
{
    student object(1,4.44);
    return 0;
}
