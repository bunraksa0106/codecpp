#include<iostream>
#include<conio.h>
#include<string.h>
#include<malloc.h>
using namespace std;

class Person{
    private:
    int code;
    protected: 
    char name[25];
    public:
    void input(); 
    void output(); 
    Person();
    Person(int code=248, char *Name="Unknown");
};
class Worker: public Person{
    private:
    int hour; double salary;
    protected:
    static float Rate;
    public:
    void input();
    void output();
    static float getRate(){
        return Rate;
    }
    friend void SearchName(Worker obj[100], int n, char Item[25]);
    friend void SortSalary(Worker obj[100], int n);
    Worker(int code=253,char *Name="Unknown", int hour=40, double salary=500);
    static void Showall();
};
void Person::input(){
    cout<<"\nEnter code: "; cin>>code;
    cout<<"\nEnter Name: "; cin.ignore(); cin.getline(name, 25);
}
void Person::output(){
    cout<<"\n"<<code;
    cout<<"\t"<<name;
}
float Worker::Rate = 2.5;
Person::Person(int code, char *Name){
    this->code = code;
    strcpy(name, Name);
}
void Worker::output(){
    Person::output();
    cout<<"\t"<<hour;
    cout<<"\t"<<salary;
    cout<<"\t"<<getRate();
    cout<<"\t"<<hour * getRate();
}
Person::Person() {
    code = 0;
    strcpy(name, "Unknown");
}
Worker::Worker(int code, char *Name, int hour, double salary) : Person(code, Name) {
    this->hour = hour;
    this->salary = salary;
}
void Worker::input(){
    Person::input();
    cout<<"\nEnter Hour: "; cin>>hour;
    cout<<"\nEnter Salary: "; cin>>salary;
}
void SearchName(Worker obj[100], int n, char Item[25]){
    int found = 0;
    for(int i=0;i<n;i++){
        if(strcmp(obj[i].name, Item) == 0){
            cout<<"\nCode\tName\tHour\tSalary\tRate\tIncome";
            obj[i].output();
            found = 1;
        }
    }
    if(found==0) 
    cout<<"\nNot Found!";
}
void SortSalary(Worker obj[100], int n){
    Worker temp; int i,j;
    for(i=0;i<n;i++){
        for(j= i+1;j<n;j++){
            if(obj[i].salary>obj[j].salary){
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }
    cout<<"\nData After sort";
    cout<<"\nCode\tName\tHour\tSalary\tRate\tIncome";
    for(i=0;i<n;i++){
        obj[i].output();
    }
}
int main(){
    int i,n;
    cout<<"\nDerived Class Worker from Base Class Person";
    cout<<"\n1. Assign Values to Object";
    cout<<"\n2. Input from Keyboard";
    cout<<"\n3. Exit program";
    int code;
    do{
        cout<<"\nEnter your choice: "; cin>>code;
        switch(code){
            case 1:{
                Worker obj[100] = {
                    Worker(168, "Athy", 40, 1000),
                    Worker(221, "Bath", 35, 1200),
                    Worker(334, "Ka", 45, 900),
                };
                cout<<"\nData after Assigning Values to Object";
                cout<<"\nCode\tName\tHour\tSalary\tRate\tIncome";
                for(int i=0;i<3;i++){
                    obj[i].output();
                }
                cout<<"\nSearch by Name";
                char Item[25];
                cout<<"\nEnter Name to Search: "; cin.ignore(); cin.getline(Item,25);
                SearchName(obj, 3, Item); getch();
                cout<<"\nSort by Salary";
                SortSalary(obj, 3); 
                break;
            } 
            case 2:{
                cout<<"\nInput from Keyboard";
                Worker obj[100];
                int n, choice;
                char Item[25];
                cout<<"\nEnter Number of Workers: "; cin>>n;
                for(int i=0;i<n;i++){
                    cout<<"\nEnter Details of Worker "<<i+1<<": ";
                    obj[i].input();
                }
                do{
                    cout<<"\n1. Search by Name ";
                    cout<<"\n2. Sort by Salary";
                    cout<<"\n3. Output data of Worker";
                    cout<<"\n4. Exit";
                    cout<<"\nEnter your choice: "; cin>>choice;
                    switch(choice){
                        case 1:
                            cout<<"\nEnter Name to Search: "; cin.ignore(); cin.getline(Item, 25);
                            cout<<"\nCode\tName\tHour\tSalary\tRate\tIncome";
                            SearchName(obj, n, Item);
                            break;
                        case 2:
                            SortSalary(obj, n);
                            break;
                        case 3:
                            cout<<"\nCode\tName\tHour\tSalary\tRate\tIncome";
                            for(i=0;i<n;i++){
                                obj[i].output();
                            }
                            break;
                        case 4:
                            cout<<"\nExiting...";
                            break;
                        default:
                            cout<<"\nInvalid Choice!";
                    }
                }while(choice!=4);  
                break;   
            }
            default: 
                cout<<"\nYour choose wrong!";
        }
    }while(code != 3);
    return 0;
}