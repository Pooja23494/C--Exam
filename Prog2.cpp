// Create a multilevel inheritance structure with:
// class 1:Student-to input student name
// class 2:Marks-to input marks of 3 subjects using array
// class 3: Result-to calculate and display total and percentage.

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string s_name;
        void setStudent()
        {
            cout<<"Enter Student Name: ";
            getline(cin,this->s_name);
        }
        void getStudent()
        {
            cout<<endl;
            cout<<"Student Marksheet"<<endl;
            cout<<"-----------------"<<endl;
            cout<<"Student Name: "<<this->s_name<<endl;
        }
};
class Marks : public Student{
    public:
        int marks[3],total;
        void setMarks()
        {
            for(int i=0;i<3;i++)
            {
                cout<<"Enter Mark for Subject ["<<i+1<<"]: ";
                cin>>this->marks[i];
                this->total += this->marks[i];
            }
        }
        void getMarks()
        {
            for(int i=0;i<3;i++)
            {
                cout<<"Mark for Subject ["<<i+1<<"]: "<<this->marks[i]<<endl;
            }
            cout<<"Total Marks: "<<this->total<<endl;
        }
};
class Result : public Marks{
    public:
        int avg;
        void calculateResult()
        {
            this->avg=this->total/3;
        }
        void getAverage()
        {
            cout<<"Percentage: "<<this->avg<<" % "<<endl;
        }
};
int main(){

    Result obj;
    obj.setStudent();
    obj.setMarks();
    obj.calculateResult();
    obj.getStudent();
    obj.getMarks();
    obj.getAverage();
    return 0;
}