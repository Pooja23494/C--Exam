// Create a menu-driven program that performs the following using vector of strings:
// -Add a student name
// -View all student names
// -Delete student name by index
// Use appropriate function for each operation

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int choice,size,index;
    string s_name;
    vector<string> v1;


    do{
        cout<<endl;
        cout<<"Enter 1 for Add Student Name"<<endl;
        cout<<"Enter 2 for View all Student Names"<<endl;
        cout<<"Enter 3 for Delete Student Name"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter size of Vector: ";
            cin>>size;

            for(int i=0;i<size;i++)
            {
                cout<<"Enter Student Name ["<<i<<"]: ";
                cin>>s_name;
                v1.push_back(s_name);
            }
            
            break;
        
        case 2:
            for(int i=0;i<v1.size();i++)
            {
                cout<<"Student Name ["<<i<<"]: "<<v1.at(i)<<endl;
            }
            break;

        case 3:
            cout<<"Enter index for delete: ";
            cin>>index;

            if(index>=0 && index<v1.size())
            {
                v1.erase(v1.begin()+index);
                cout<<"Deleted Successfully.."<<endl;
            }
            break;

        case 0:
            cout<<"Exit."<<endl;
            break;
        
        default:
            cout<<"Wrong choice!"<<endl;
            break;
        }

    }while(choice!=0);
    return 0;
}
