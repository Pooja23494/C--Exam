// Create a class Student to store 5 student names using an array. Create a derived 
// class Display that will show all student names using single inheritance.

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string s_name[5];
        void setStudent()
        {
            for(int i=0;i<5;i++)
            {
                cout<<"Enter Student Name["<<i+1<<"]: ";
                getline(cin,this->s_name[i]);
            }
        }
};

class Display : public Student{
    public:
        void getStudent()
        {
            cout<<endl;
            cout<<"View All Student Name"<<endl;
            cout<<"---------------------"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<"Student Name["<<i+1<<"]: "<<this->s_name[i]<<endl;
            }
        }
};
int main(){

    Display obj;
    obj.setStudent();
    obj.getStudent();
    return 0;
}