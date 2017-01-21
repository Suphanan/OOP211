//Suphanan Mujarin580510640

#include <iostream>

using namespace std;
char calculate_grade(float score);

int main(){
    int n;
    float score;
    int countA=0;
    int countB=0;
    int countC=0;
    int countD=0;
    
    char grade;
    cout<<"input n :";
    cin>>n;
   
    for(int i =0;i<n;i++){
        cout<<"input score: ";
        cin>>score;
        
        grade =calculate_grade(score);

        switch (grade) {
    case 'A':
        countA+=1;
        break;
    case 'B':
        countB+=1;
        break;
    case 'C':
        countC+=1;
        break;
    case 'D':
        countD+=1;
        break;
        }
    }

    cout << "--------------"<<endl;
    cout << "grade A have "<<countA<<endl;
    cout << "grade B have "<<countB<<endl;
    cout << "grade C have "<<countC<<endl;
    cout << "grade D have "<<countD<<endl;

    return 0;
}

char calculate_grade(float score){
    if (score >= 80) {
        return 'A';
    }
    else if ((score>= 66) && (score<=79)){
        return 'B';
    }
    else if ((score>= 50) && (score<=65)){
        return 'C';
    }
    else if (score<50){
        return 'D';
    }

}
