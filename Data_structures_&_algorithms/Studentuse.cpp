#include<iostream>
using namespace std;
#include "Realstudent.cpp"
int main(){
    
    Realstudent s1;

    s1.setage(20);//setting age
    s1.display();//displaying its value

    cout<<endl;
    cout<<"parametarised constructer"<<endl;
    Realstudent s2(50,191090039);//parametarised constructer
    s2.display();//displaying its value
    cout<<"adress of s2 : "<<&s2<<endl;

    Realstudent s3(s2);
    cout<<endl;
    cout<<"copy constructer"<<endl;
    s3.display();

    cout<<endl;
    cout<<"copy assignment operatore"<<endl;
    Realstudent s5(10,100);
    s5.display();
    Realstudent s6(11,101);
    s6.display();
    s6 = s5;
    cout<<"copied object"<<endl;
    s6.display();
    
    cout<<endl;
    
    






;}