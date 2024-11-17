#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    Teacher(string n,string d,string s,double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Department:"<<dept<<endl;
        cout<<"Subject:"<<subject<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main(){
    Teacher t1("Shraddha","Computer Science","C++",25000);
    t1.getInfo();
    t1.setSalary(45000);
    t1.getSalary();
    t1.getInfo();

    return 0;
}