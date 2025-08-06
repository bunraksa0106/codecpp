#include<iostream>
#include<string.h>
#include<conio.h>
#include<malloc.h>
using namespace std;

class test{
    private:
    int data1;
    protected: char data2[25];
    public:
    void input(); void output(); 
    test();
    test(int data1,char data2[25]);
};
class sample:public test{
    private:
    int data3;
    public:
    void inputall();
    void outputall();
    char* getdata2();
    float getdata3(){
        return data3;
    }
    void showdata();
    sample();
    sample(char data2[25],int data3);
};
sample::sample(){
    strcpy(data2,"ljdef");
    data3=767;

}
sample::sample(char data2[25],int data3){
    strcpy(this->data2,"Sarit");
    this->data3=data3;
}
void test::input(){
    cout<<"\nEnter code: "; cin>>data1;
    cout<<"\nEnter Name: "; cin.ignore(); cin.getline(data2,25);
}
void test::output(){
    cout<<"\n"<<data1<<"\t"<<data2<<endl;
}
void sample::inputall(){
    input();
    cout<<"\nEnter data3: "; cin>>data3;
}
test::test(){
    data1=90;
    strcpy(data2,"Bun Raksa");
}
test::test(int data1,char data2[25]){
    this->data1=data1;
    strcpy(this->data2,"I m Bun Raksa");
}
void sample::outputall(){
    cout<<"\nData2: "<<data2<<endl;
    cout<<"\nValue data3: "<<data3<<endl;
}
int main(){
    cout<<"\nCreate data with OOP and Inheritance";
    cout<<"\nInput data with base_class";
    test obj;
    obj.input();
    obj.output();
    getch();
    sample obj1;
    obj1.inputall();
    obj1.outputall();
    return 0;
}