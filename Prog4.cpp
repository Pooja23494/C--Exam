// Create a base class Shape. Derive two classes:
// -circle -to calculate area of a circle
// -rectangle -to calculate area of a rectangle
// Use hierarchical inheritance and call appropriate area fuctions.

#include<iostream>
using namespace std;

class Shape{
    public:
        float area;
};
class Circle : public Shape{
    public:
        float PIE=3.14;
        float r;

        void setArea()
        {
            cout<<"Enter Radius of Circle: ";
            cin>>r;
            area=this->PIE*r*r;
        }
        void getArea()
        {
            cout<<"-----------------"<<endl;
            cout<<"Area of Circle: "<<this->area<<endl;
            cout<<"-----------------"<<endl;
        }
};
class Rectangle : public Shape{
    public:
        float l,b;

        void setArea()
        {
            cout<<"Enter Length of Rectangle: ";
            cin>>l;
            cout<<"Enter Breath of Rectangle: ";
            cin>>b;
            area=this->l*this->b;
        }

        void getArea()
        {
            cout<<"-----------------"<<endl;
            cout<<"Area of Rectangle: "<<this->area<<endl;
            cout<<"-----------------"<<endl;
        }
};
int main(){

    Circle c;
    Rectangle r;

    c.setArea();
    c.getArea();

    r.setArea();
    r.getArea();
    return 0;
}