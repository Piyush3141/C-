#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    string name;
    string dept;
    string subject;
    double salary;
    void changedept(string newdept)
    {
        dept = newdept;
    }
};
int main()
{
    Teacher t1;
    t1.name ="Piyush";
    t1.subject ="C++";
    t1.dept ="Computer Science";
    t1.salary ="25000000";
    cout << t1.name << endl;
    return 0;
}