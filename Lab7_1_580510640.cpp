/*
Suphanan Mujarin
580510640
*/

#include <iostream>

using namespace std;

class Student_
{
friend void compare_score(Student_ *stuPrt[],int n);
    private :
        char name[30];
        float score_;
        char grade_;
     

    public :
        void set_Info(){
            cout<<"Name: ";
            cin>>name;
            cout<<"Score: ";
            cin>>score_;
        }

        void setGrade(){
            if(score_ >= 50 ){
                grade_ = 'P';
            }
            else{
                grade_ = 'F';
            }
        }

        void showData(int i){
            cout<<i+1<<"\t"<<name<<"\t\t";
            cout<<score_<<"\t"<<grade_<<endl;
        }
};

void compare_score(Student_ *stu[],int n){
    int i;
    int P_count=0;
    int F_count=0;
    for(i=0;i<n;i++){
        if((stu[i]->grade_) == 'P'){
            P_count+=1;
        }
        else{
            F_count+=1;
        }     
    }
    
    if ( P_count == F_count ){
        cout<<"Number of students who pass and Number of students who fail are equal";
    }
    else if( P_count > F_count ){
        cout<<"Number of students who pass is more than number of students who fail";
    }
    else{
        cout<<"Number of students who pass is less than number of students who fail";
    }
}


int main(){
    int i;
    int n=0;

    cout<<"\nInput number of person: ";
    cin>>n;
    Student_ *stu[n];
    for(i=0;i<n;i++){
        stu[i] = new Student_;
        stu[i]->set_Info();
        stu[i]->setGrade();
    }

    cout<<"\nNo."<<"\tName"<<"\t\tScore"<<"\tGrade"<<endl;

    for(i=0;i<n;i++){
        stu[i]->showData(i);
    }
    compare_score(stu,n);

    for(i=0;i<n;i++){
        delete stu[i];
    }

    return 0;
}