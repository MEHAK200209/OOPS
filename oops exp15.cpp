#include<iostream>
using namespace std;
class shape
{
	public:
		double x,y;
		shape()
		{
			x=0;
			y=0;
		}
	void get_data()
	{
		cout<<"enter height(x):";
		cin>>x;
		cout<<"enter base(y):";
		cin>>y;
		}
	virtual void display_area()
	{
	}
};

class triangle:public shape
{
	public:
	
	void display_area()
	{
		
	
		cout<<"\narea of triangle=1/2(base*height)-\n";
		cout<<(x*y)/2;
		
	}
};

class rectangle:public shape
{
	public:
		void display_area()
		{
			cout<<"\narea of rectangle=height*base-";
			cout<<x*y;
			
		}
};

int main()
{
	shape *s;
	triangle t;
	t.get_data();
	s=&t;
	s->display_area();
	rectangle r;
	r.get_data();
	s=&r;
	s->display_area();
	
}
