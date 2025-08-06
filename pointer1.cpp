#include<iostream>
#include<string.h>
#include<malloc.h>
#include<conio.h>
using namespace std;

class Student{
    private:
    int code; char name[25]; float score; char phone[15];
    public:
    void input(){
        cout<<"\nEnter code: "; cin>>code;
        cout<<"\nEnter name: "; cin.ignore(); cin.getline(name,25);
        cout<<"\nEnter score: "; cin>>score;
        cout<<"\nEnter Phone: "; cin.ignore(); cin.getline(phone,15);
    }
    void setdata(int id , char st[25], float s, char num[15]){
        this->code=id;
        strcpy(name,st);
        this->score=s;
        strcpy(phone,num);
    }
    void output(){
        cout<<"\n\t\t"<<code<<"\t:\t"<<name<<"\t:\t"<<score<<"\t:\t"<<phone<<endl;
    }
    void setscore(float score){
        this->score=score;
    }
    void setname(char *name){
        strcpy(this->name,name);
    }
    float getscore(){
        return score;
    }
    char* getname(){
        return name;
    }
    //constructors
    Student(){
        code=29; strcpy(name,"kakk"); score=23; strcpy(phone,"0968782196");
    }
    Student(int code,char* name,float s,char num[15]){
        this->code=code;
        strcpy(this->name,name);
        this->score=s;
        strcpy(phone,num);
    }
};
void head(){
    cout<<"\n\t\tCode\t\tName\t\tScore\t\tPhone";
}
void search(){
    int found=0; 
    int item;
    cout<<"\nEnter item that you want to find it : "; cin>>item;
    for()
}
int main(){
    cout<<"\n\t\tPractice OOP with pointer and constructors";
    cout<<"\nUse pointer";
    int *px=new int; *px=458; cout<<"\nPointer integer: "<<*px;
    float *py=new float ; *py=23.3; cout<<"\nPointer float : "<<*py;
    double *p=new double(83.5); cout<<"\nValue P: "<<*p;
    Student *ptr; 
    ptr=new Student();
    cout<<"\nDefualt obj: ";
    ptr->output();
    Student *pt=new Student(764,"Heng",89.3,"0998767");
    cout<<"\nconstructors with paramaters: ";
    pt->output();
    getch();
    cout<<"\nCreate list (A,B or C)of Student and output on screen"<<endl;
    cout<<"\t\t====================================================="<<endl;
    cout<<"\t\t1.Assign 7 objects to list of Student with constuctors"<<endl;
    cout<<"\t\t2.Input list of Student n objects form keyboard"<<endl;
    cout<<"\t\t3.Assign 7 objects to list of Student with emplementors"<<endl;
    cout<<"\t\t======================================================"<<endl;
    int code,n=7,i;
    do{
        cout<<"Enter your choice : "; cin>>code;
        switch(code){
            case 1:{
        cout<<"\nA.Assign 7 objects to list of student"; 
         Student obj[7]={Student(675,"Ka",9.3,"0376464"),Student(354,"Ruth",98.3,"098753"),Student(24,"Raksa",93.5,"012534"),Student(89,"henge",9.3,"09564"),Student(93,"Yojf",95.4,"02134"),Student(),Student(845,"Hneg",11.2,"0167773")};
         head();
        for(i=0;i<n;i++){
            obj[i].output();
        }
        break;
    }
        case 2:{
        cout<<"\nB.Input list of Student n objects form keyboard";
        int i,n; Student obj1[100];
        cout<<"\nEnter n : "; cin>>n;
        for(i=0;i<n;i++){
            obj1[i].input();
        }
        head();
        for(i=0;i<n;i++){
            obj1[i].output();
        }
        break;
        }
    }
    }while(code!=5);
    return 0;
}