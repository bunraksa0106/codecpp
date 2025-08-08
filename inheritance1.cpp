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
    int data3; int code;
    public:
    void inputall();
    void outputall();
    char* getdata2(){
        return data2;
    };
    float getdata3(){
        return data3;
    }
    void showdata();
    sample();
    sample(int code, char data2[25],int data3);
};
sample::sample(){
    data3=767;
}
sample::sample(int code,char data2[25],int data3){
    strcpy(this->data2,"Sarit");
    this->data3=data3;
    this->code=code;
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
    test obj11; test obj12(335,"Test");
    cout<<"\nCreate data with OOP and Inheritance";
    cout<<"\n1.1.Output object of constructor ";
    obj11.output();  obj12.output();
    cout<<"\n1.1.input one object of base class";
    obj11.input(); obj12.input();
    cout<<"\n2.Create object with derived class ";
    cout<<"\n2.1.Use constructors "; sample obj21; sample obj22(56,"Samnang",98);
    obj21.outputall(); obj22.outputall();
    cout<<"\n2.2.Input one object of base class ";
    obj21.inputall();
    obj21.outputall();
    cout<<"\n=====================================";
    getch();
    cout<<"\n3.Create list with inpheritance \n";
    cout<<"\n3.1.Interlize 7 objects and output on screen ";
    int n=7;
    int i;
    sample Aobj[7]={sample(78,"Hengkim",99),sample(),sample(278,"Um Rithy",17),sample(89,"Neang Saray",27),sample(892,"Nori",77),sample(194,"PengKry",11),sample(829,"Makara",79)};
    cout<<"\nOutput on screen\n";
    for(i=0;i<n;i++){
        Aobj[i].outputall();
    }
    cout<<"\n3.2.Press Search sort update...";
    getch();
    cout<<"\n3.3.Create n objects from keyboard ";
    int n;
    cout<<"\nEnter n: "; cin>>n;
    sample *Pobj; Pobj=new sample[n];
    for(i=0;i<n;i++){
        cout<<"\nSample["<<i<<"]";
        Pobj[i].inputall();
    }
    
    return 0;
}