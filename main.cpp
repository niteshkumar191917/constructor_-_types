#include<iostream>
using namespace std;

class area_Of_Rectangle
{
    private:int l,b;
    public:void getdata()
    {
        cout<<"enter length : "<<endl;
        cin>>l;
        cout<<"enter breadth : "<<endl;
        cin>>b;
    }
    area_Of_Rectangle()
    {
        l=0;   b=0;
        
    }
    area_Of_Rectangle(int x, int y)
    {
        l=x;  b=y;  
    }
    area_Of_Rectangle(int x)
    {
        l=x;    b=10;
    }
    area_Of_Rectangle(const area_Of_Rectangle &a1)
    {
        l=a1.l;    b=a1.b; 
    }
    void display()
    {
        cout<<"area of rectangle : "<< l*b<<endl;
    }
};

int main()
{
    area_Of_Rectangle a1; 
    a1.getdata();
    area_Of_Rectangle a2(5,4);
    area_Of_Rectangle a3(7);
    area_Of_Rectangle a4 = a1 ;
cout<<"this is default constructor : "<<endl;
    a1.display();
cout<<"this is parametrized constructor :"<<endl;
    a2.display();
cout<<"this is constructor overloading :"<<endl; 
    a3.display();
cout<<"this is copy constructor :"<<endl;
    a4.display();
    return 0;
}