#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    Student(int x,double y)
    {
      id=x;
      gpa=y;
    }
    Student()
    {
        cout<<"default constructor"<<endl;
    }
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }

};
int main()
{
    Student Alim(101,3.94);
    Alim.display();

    Student ob;
    return 0;
}

