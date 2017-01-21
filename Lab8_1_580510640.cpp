//580510640
//suphanan mujarin
#include <iostream>
using namespace std;

class Info_
{
protected:
    char name[20];
    char last_name[20];
    int age;
public: 
    void setData(){
        cout<<"Name:";
        cin>>name;
        cout<<"Last name:";
        cin>>last_name;
        cout<<"Age:";
        cin>>age;
    }
    void printData(){
        cout<<"Name:"<<name;
        cout<<" Last name:"<<last_name;
        cout<<" Age:"<<age;
    }
};

class Teacher_:public Info_
{
private:
    int salary;
public:
    void setSalary(){
    cout<<"Salary:";
    cin>>salary;        
    }

    void printSalary(){
        cout<<" Salary:"<<salary;
    }
};

class Student_:public Info_
{
private:
    int level;
public:
    void setLevel(){
    cout<<"level:";
    cin>>level;        
    }

    void printLevel(){
        cout<<" Level:"<<level;
    }
};


int main()
{
    Teacher_ myTeacher;
    Student_ myStudent;
    cout<<"TEACHER INFORMATION\n";
    myTeacher.setData();
    myTeacher.setSalary();
    myTeacher.printData();
    myTeacher.printSalary();

    cout<<"\n\n";

    cout<<"STUDENT INFORMATION\n";
    myStudent.setData();
    myStudent.setLevel();
    myStudent.printData();
    myStudent.printLevel();
}