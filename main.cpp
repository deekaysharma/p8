#include <iostream>

using namespace std;

class person
{
    private:
    char name[20];
    long int phno;
    public:
    void read()
    {
        cout<<"enter name and phno =";
        cin>>name>>phno;

    }
    void show()
    {
        cout<<"\nName = "<<name;
        cout<<"\Phone Number ="<<phno;
    }
};
class student : public person
{
    private:
    int rollno;
    char course[20];
    public:
    void read()
    {
        person::read();
        cout<<"enter rollno and course =";
        cin>>rollno>>course;
    }
    void show()
    {
        person::show();
        cout<<"\nrollno ="<<rollno;
        cout<<"\ncourse ="<<course;
    }
};
int main()
{
    student s1;
    s1.read();
     cout<<"Display Info. =";
     s1.show();

     return 0;
}
