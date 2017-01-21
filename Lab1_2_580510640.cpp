using namespace std;
#include <iostream>

float avg_score(int score[],int n);

int main() {
    int i = 0;
    int score[20];
    while(i<=20){
        cout<< "Input score!";
        cin>>score[i];
        if (score[i] < 0){
            break;
        }
        i+=1;
    }
    avg_score(score,i);

}

float avg_score(int score[],int n){
    int i =1;
    float sum =score[0];
    int count_student =0;
    float mean =0.0;

    for (i=1; i < n; i++) {
        sum+=score[i];;
    }
    mean=sum/n;

    for(int i=1;i < n; i++){
        if (score[i]<mean){
            count_student+=1;
        }
    }
    cout<<"mean =" <<mean << "\n";
    cout<<"student under mean =" <<count_student << "\n";
}

   
   


