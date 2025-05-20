// Create a Product class with attributes name and price. Use a vectore to store 
// multiple products. Input and display all product details.

#include<iostream>
#include<vector>
using namespace std;

class Product{
    public:
        vector<string> v1;
        vector<double> v2;
        string p_name;
        double price;
        int size;

        void setProduct()
        {
            cout<<"Enter size of vector: ";
            cin>>size;
            for(int i=0;i<size;i++)
            {
                cout<<"Enter Product Name["<<i+1<<"]: ";
                cin>>p_name;
                v1.push_back(p_name);
                cout<<"Enter Price["<<i+1<<"]: ";
                cin>>price;
                v2.push_back(price);
            }
        }
        void getProduct()
        {
            cout<<endl;
            cout<<"Display All Product List"<<endl;
            cout<<"------------------------"<<endl;
            for(int i=0;i<this->size;i++)
            {
                cout<<"Product Name["<<i+1<<"]: "<<v1.at(i)<<endl;
                cout<<"Price["<<i+1<<"]: "<<v2.at(i)<<endl;
            }
        }
};
int main(){
    
    Product obj;
    obj.setProduct();
    obj.getProduct();
    return 0;
}