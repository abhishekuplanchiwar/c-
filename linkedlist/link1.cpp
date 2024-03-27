#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;

    student(string name,int rollno){
        this->name = name;
        this->rollno = rollno;
    }

};
int main(){
   
    // obj.name="abhishek";
    // obj.rollno=11;
    // cout<<obj.name<<endl;
    // cout<<obj.rollno;
    //if i want to use in one sentence then i am using consrtuctor
     student obj("abhi",11);
     cout<<obj.name;
     cout<<obj.rollno;

}