/*
Suphanan Mujarin
580510640
*/

#include <iostream>
#include <string>

using namespace std;


class student{
    private :
        int code;
        float accumulated_marks;
        float midterm_s;
        float final_s;
        float score;
        string grade_;

    public :
        void set_info(int i){
            cout<<"Enter code of student no."<<i<<": ";
            cin>>code;
            cout<<"Enter accumulated marks of student no."<<i<<": ";
            cin>>accumulated_marks;
            cout<<"Enter midterm score of student no."<<i<<": ";
            cin>>midterm_s;
            cout<<"Enter final score of student no."<<i<<": ";
            cin>>final_s;
            cout<<"--------------------------------------------"<<endl;
        }

        void cal_grade(){
            score = accumulated_marks+midterm_s+final_s;
            if (score >= 85) {
                grade_= "A+";
            }
            else if ((score>= 80) && (score<=84)){
                grade_= "A";
            }
            else if ((score>= 75) && (score<=79)){
                grade_= "B+";
            }
            else if ((score>= 60) && (score<=74)){
                grade_= "B";
            }
            else if ((score>= 50) && (score<=59)){
                grade_= "C";
            }
            else{
                grade_= "F";
            }
        }

        void print_info(int i){
            cout<<i<<"  "<<code<<"  "<<score<<"  "<<grade_<<endl;

        }
    
};

int main(){
    int n=0;
    cout<<"Enter n : ";
    cin>>n;
    student  stu[n+1];
    for (int i = 0; i < n; i++)
    {
        stu[i].set_info(i+1);
        stu[i].cal_grade();
    }
    for (int i = 0; i < n; i++){
        stu[i].print_info(i+1);
    }

    return 0;
}