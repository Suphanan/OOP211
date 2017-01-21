//580510640
//suphanan mujarin
#include <iostream>

using namespace std;


class MonthEmployee;
class WeekEmployee;
class DayEmployee;
class dayANDweek;


class Employee{
friend void printMonth(int i,MonthEmployee *Mem);
friend void printWeek(int j,WeekEmployee *Wem);
friend void printDay(int k,DayEmployee *Dem);


protected:
    int ID;
    char name[20];

public:
    void setEmployee(){
        cout<<"ID: ";
        cin>>ID;
        cout<<"Name: ";
        cin>>name;    
    }
};

class MonthEmployee:public Employee
{
friend void printMonth(int i,MonthEmployee *Mem);
private:
    int salary;
    int period;

public:
    void setMonth(){
        cout<<"Salary: ";
        cin>>salary;
        cout<<"Period: ";
        cin>>period;
    }
    int calOvertime(){
        int OT;
        OT = period*200;
        return OT;
    }
};

class dayANDweek:public Employee
{
friend void printWeek(int j,WeekEmployee *Wem);
friend void printDay(int k,DayEmployee *Dem);
friend int calCommission();
protected:
    int sell;
    int broker;

public:
    void setCommission(){
        cout<<"Sell: ";
        cin>>sell;
        cout<<"Broker: ";
        cin>>broker;
    }
    int calCommission(){
        int commission;
        commission=sell*broker;
        return commission;
    }
};

class WeekEmployee:public dayANDweek
{
friend void printWeek(int j,WeekEmployee *Wem);

private:
    int week;
    int w_wage;

public:
    void setWeek(){
        cout<<"Wage per week: ";
        cin>>w_wage;
        cout<<"Week: ";
        cin>>week;
    }
    int calW_wage(){
        int Week_wage;
        Week_wage=w_wage*week;
        return Week_wage;
    }
};

class DayEmployee:public dayANDweek
{
friend void printDay(int k,DayEmployee *Dem);

private:
    int day;
    int d_wage;

public:
    void setDay(){
        cout<<"Wage per day: ";
        cin>>d_wage;
        cout<<"Day: ";
        cin>>day;
    }
    int calD_wage(){
        int Day_wage;
        Day_wage =d_wage*day;
        return Day_wage;
    }
};


void printMonth(int i,MonthEmployee *Mem){
    cout<<"\nMonth Employees";
    cout<<"\nID\t\tName\t\tSalary\t\tOvertime\tTotal";
    int c=0;
    int temp1;
    int temp2;
    int sum=0;
    for(;c<i;c++){
        cout<<"\n"<<Mem[c].ID;
        cout<<"\t\t"<<Mem[c].name;
        temp1 = Mem[c].salary;
        cout<<"\t\t"<<temp1;
        temp2 = Mem[c].calOvertime();
        cout<<"\t\t"<<temp2;
        cout<<"\t\t"<<temp1+temp2;
        sum += temp1+temp2;
    }
    cout<<"\nTotal "<<sum;

}

void printWeek(int j,WeekEmployee *Wem){
    cout<<"\n\nWeek Employees";
    cout<<"\nID\t\tName\t\tSalary\t\tOvertime\tTotal";
    int c=0;
    int temp1;
    int temp2;
    int sum=0;
    for(;c<j;c++){
        cout<<"\n"<<Wem[c].ID;
        cout<<"\t\t"<<Wem[c].name;
        temp1 = Wem[c].calW_wage();
        cout<<"\t\t"<<temp1;

        temp2 = Wem[c].calCommission();
        cout<<"\t\t"<<temp2;
        cout<<"\t\t"<<temp1+temp2;
        sum += temp1+temp2;
    }
    cout<<"\nTotal "<<sum;
}

void printDay(int k,DayEmployee *Dem){
    cout<<"\n\nDay Employees";
    cout<<"\nID\t\tName\t\tSalary\t\tOvertime\tTotal";
    int c=0;
    int temp1;
    int temp2;
    int sum=0;
    for(;c<k;c++){
        cout<<"\n"<<Dem[c].ID;
        cout<<"\t\t"<<Dem[c].name;
        temp1 = Dem[c].calD_wage();
        cout<<"\t\t"<<temp1;
        temp2 = Dem[c].calCommission();
        cout<<"\t\t"<<temp2;
        cout<<"\t\t"<<temp1+temp2;
        sum += temp1+temp2;
    }
    cout<<"\nTotal "<<sum;
}



int main(){
    char n_com[20];
    cout<<"Input name company: ";
    cin>>n_com;
    
    int n;
    cout << "Enter N:";
    cin >> n;
    int key =0;
    
    MonthEmployee Mem[n];
    WeekEmployee Wem[n];
    DayEmployee Dem[n];


    int i = 0;
    int j = 0;
    int k = 0;

    int index;
    for (index=0; index < n; index++) {
        cout << "Month Employee: 1 \nWeek Employee:2 \nDay Employee:3 \nSelect the type of employee =  ";
        cin >> key;
        if (key == 1) {
            Mem[i].setEmployee();
            Mem[i].setMonth();
            Mem[i].calOvertime();
            i += 1;
        }
        if(key == 2)
        {
            Wem[j].setEmployee();
            Wem[j].setWeek();
            Wem[j].setCommission();
            j += 1; 
        }
        if(key == 3)
        {
            Dem[k].setEmployee();
            Dem[k].setDay();
            Dem[k].setCommission();
            k += 1; 
        }
    }
    cout<<"\t\t\t\t"<<n_com<<" Company";  
    printMonth(i,Mem);
    printWeek(j,Wem);
    printDay(k,Dem);

    return 0;
}



