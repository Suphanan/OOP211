/*
* @Author: Suphanan
* @580510640
*/

#include <iostream>

using namespace std;
class Undergraduate;
class Graduate; 

class Student {
friend void reportGrade(Student *stu_[],int n);
protected:
    char name[20];
    float midterm;
    float final;
public:
    void setInfo(){
        cout<<"Enter name:";cin>>name;
        cout<<"Enter midterm score:";cin>>midterm;
        cout<<"Enter final score:";cin>>final;
    }
    virtual int printGrade()=0;
};

class Undergraduate:public Student{
friend void reportGrade(Student *stu_[],int n);
private:
    float p_score;
public:
    void setPro_score(){
        cout<<"Enter project score:";cin>>p_score;
    }
    int printGrade(){
        return ((p_score>=50) && (midterm+final>=50))? 1:0;
    }
};

class Graduate:public Student{
friend void reportGrade(Student *stu_[],int n);
    private:
    float publication;
public:
    void setPublicationNo(){
        cout<<"Enter number of publication:";cin>>publication;
    }
    int printGrade(){
        return ((publication>=2) && (midterm+final>=60))? 1:0;
    }
};

void reportGrade(Student *stu_[],int n){
    cout<<"Grade Report"<<endl;
    cout<<"= = = = = = = = ="<<endl;
    int cU=0;
    int cS=0;
    for(int i=0;i<n;i++){
        cout<<stu_[i]->name;
        if(stu_[i]->printGrade()){
            cout<<" gets grade S."<<endl;
            cS+=1;
        }
        else{
            cout<<" gets grade U."<<endl;
            cU+=1;
        }
    }
    cout<<"Total: Grade U="<<cU<<" Grade S="<<cS;
}



int main(){
    Student *stu_[100];
    Undergraduate *ungd_;
    Graduate *gd_;

    int n=0;
    char key;

    do{
        cout<<"Enter undergraduate student or graduate student (u/g):";
        cin>>key;
        if(key == 'u'){
            ungd_=new Undergraduate;
            ungd_->setInfo();
            ungd_->setPro_score();
            stu_[n++]=ungd_;
        }
        else{
            gd_=new Graduate;
            gd_->setInfo();
            gd_->setPublicationNo();
            stu_[n++]=gd_;
        }
        cout<<"Enter another(y/n)?";
        cin>>key;
        cout<<"\n";
    }while(key == 'y');
    reportGrade(stu_,n);

    return 0;
}