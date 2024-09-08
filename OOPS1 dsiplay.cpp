#include<iostream>
using namespace std;
class Student 
    {
        public:
        string name;
        float age;
        string branch;
        float result;
        string year;
    };
int main()
{
    Student s1;
        s1.name="Amey";
        s1.age=19;
        s1.branch="ENTC";
        s1.result=8.5;
        s1.year="2nd year";
        cout<<s1.name<<endl;
        cout<<s1.age<<endl;
        cout<<s1.branch<<endl;
        cout<<s1.result<<endl;
        cout<<s1.year<<endl;
    Student s2;
        s2.name="Anushka";
        s2.age=19;
        s2.branch="ENTC";
        s2.result=8.5;
        s2.year="2nd year";
        cout<<s2.name<<endl<<s2.age<<endl<<s2.branch<<endl<<s2.result<<endl<<s2.year<<endl;

}