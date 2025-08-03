#include<iostream>
#include<string.h>
#include<conio.h>
#include<malloc.h>
#include<cstring>
using namespace std;

class Student{
    private:
    int code; float score; char name[25]; char tel[15];
    public:
    Student(){
        this->code=43;
        strcpy(this->name,"Bun Raksa");
        this->score=78.8;
    };
    Student(int code,const char *name, float score);
    void input(); void output(); void search(int code); 
    // void Getscore(float sc){
    //     sc=score;
    // };
    // float Setscore(float score){
    //     return score;
    // }
    void setname(char *name)
    {
        strcpy(this->name,name);
    };
};
void Student::input(){
    cout<<"Enter code: "; cin>>code;
    cout<<"\nEnter name: "; cin.ignore(); cin.getline(name,25);
    cout<<"\nEnter Score: "; cin>>score;
    cout<<"\nEnter Tel: "; cin.ignore(); cin.getline(tel,15);
}
void Student::output(){
    cout<<"\n========================================";
    cout<<"\n"<<code<<"\t"<<name<<"\t"<<score<<"\t"<<tel;
}
void Student::search(int code){
    int item; int found=0;
    cout<<"\nEnter ID that you want to search: "; 
    cin>>item;
    if(item==code){
        cout<<"\nThe ID of Student: "<<code;
        output();
        found=1;
    }
    if(found==0){
        cout<<"\nNot found!";
    }
}
int main(){
    cout<<"\n\t\t>>>>>>>>>PRACTICE WITH OOP<<<<<<<<\n";
    int *px=new int; *px=458;
    float *py=new float(74.4);
    long *pt=new long[5]; 
    int i,n=5;
    for(i=0;i<n;i++){
        pt[i]=i+20;
    }
    Student *ptr=new Student();
    Student *obj=new Student(28 ,"Heng", 57.4);
    cout<<"\nOutput Value Data on Screen";
    cout<<"\npx="<<*px<<"\t"<<*py<<"\t"<<endl;
    cout<<"\nDefualt constructors";
    cout<<"\n";
    ptr->output();
    cout<<"\nConstructors with parameters";
    obj->output();
    return 0;
}
