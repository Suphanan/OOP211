//580510640
//suphanan mujarin
#include <iostream>
#include <math.h>
using namespace std;
class Teacher_;
class Student_;

class Info_
{
friend void printAllTeacher(int i, Teacher_ *myTeacher);
friend void printAllStudent(int j, Student_ *myStudent);
friend void calAndPrintAvgAge(int i, int j, Teacher_ *myTeacher, Student_ *myStudent);
friend void countTeacher(int i, float avg_T, Teacher_ *myTeacher);

protected:
    char name[20];
    char last_name[20];
    int age;
public:
    void setData()
    {
        cout << "Name:";
        cin >> name;
        cout << "Last name:";
        cin >> last_name;
        cout << "Age:";
        cin >> age;
    }
    void printData()
    {
        cout << "Name:" << name;
        cout << " Last name:" << last_name;
        cout << " Age:" << age;
    }
};

class Teacher_: public Info_
{
friend void printAllTeacher(int i, Teacher_ *myTeacher);
friend void printAllStudent(int j, Student_ *myStudent);
friend void calAndPrintAvgAge(int i, int j, Teacher_ *myTeacher, Student_ *myStudent);
friend void countTeacher(int i, float avg_T, Teacher_ *myTeacher);

private:
    int salary;
public:
    void setSalary()
    {
        cout << "Salary:";
        cin >> salary;
    }

    void printSalary()
    {
        cout << " Salary:" << salary<<endl;
    }
};

class Student_: public Info_
{

friend void printAllTeacher(int i, Teacher_ *myTeacher);
friend void printAllStudent(int j, Student_ *myStudent);
friend void calAndPrintAvgAge(int i, int j, Teacher_ *myTeacher, Student_ *myStudent);
friend void countTeacher(int i, float avg_T, Teacher_ *myTeacher);

private:
    int level;
public:
    void setLevel()
    {
        cout << "level:";
        cin >> level;
    }

    void printLevel()
    {
        cout << " Level:" << level<<endl;
    }
};

void printAllTeacher(int i, Teacher_ *myTeacher)
{
    int begin = 0;
    for (; begin < i; begin++) {
        myTeacher[begin].printData();
        myTeacher[begin].printSalary();
    }
}

void printAllStudent(int j, Student_ *myStudent)
{
    int begin = 0;
    for (; begin < j; begin++) {
        myStudent[begin].printData();
        myStudent[begin].printLevel();
    }
}

void calAndPrintAvgAge(int i,int j,Teacher_ *myTeacher,Student_ *myStudent){
    int c =0;
    float sum_T=0.0;

    for(;c<i;c++){
        //cout<<myTeacher[c].age;
        sum_T+=myTeacher[c].age; 
    }
    //cout<<sum_T;
    float avg_T=0.0;
    avg_T =sum_T/i;
    cout << "Average age of teacher is " << avg_T;

    float sum_S=0.0;
    for (c=0;c<j;c++)
    {
        //cout<<myStudent[c].age;
        sum_S+=myStudent[c].age; 
    }
    //cout<<sum_S;
    float avg_S=0.0;
    avg_S =sum_S/j;
    cout << "\nAverage age of student is " << avg_S;

    float diff;
    diff=fabs(avg_T-avg_S);
    cout << "\ndifferential of age is " << diff;

    countTeacher(i,avg_T,myTeacher);


}

void countTeacher(int i, float avg_T, Teacher_ *myTeacher){
    int c=0;
    int count=0;
    for(;c<i;c++){
        if(myTeacher[c].age < avg_T){
            count+=1;
        }
    }
    cout<< "\nNumber teacher who less than average: " <<count;
}


int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;
    int key =0;
    
    Teacher_ myTeacher[n];
    Student_ myStudent[n];


    int i = 0;
    int j = 0;

    int index;
    for (index=0; index < n; index++) {
        cout << "Teacher :press 1   or  Student :press 2 >> ";
        cin >> key;
        if (key == 1) {
            myTeacher[i].setData();
            myTeacher[i].setSalary();
            i += 1;
        }
        if(key == 2)
        {
            myStudent[j].setData();
            myStudent[j].setLevel();
            j += 1; 
        }
    }
    cout<<"\n";
    printAllTeacher(i, myTeacher);
    printAllStudent(j, myStudent);
    calAndPrintAvgAge(i,j,myTeacher,myStudent);

    return 0;
}
