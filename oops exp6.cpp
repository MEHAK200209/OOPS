#include<iostream>
#include<stdio.h>
using namespace std;
int GCD(int x,int y)
{
	if(y==0)
	{
		return x;
	}
	return GCD(y,x%y);
}
class Rational
{ 
   	public:
   			double num;
			double denom;
	Rational()
		{
			num=0;
			denom=0;
		}
	
	Rational(int a,int b)
	{
		num=a;
		denom=b;
	}
	
	void reduce(){
		int c=GCD(num,denom);
		num=num/c;
		denom=denom/c;
		cout<<"numerator is: "<<num<<endl;
		cout<<"denominator is: "<<denom<<endl;
	}
	
		friend ostream &operator<<(ostream &output, const Rational &r)
		{
			output<<"numerator is: "<<r.num<<"  denominator is: "<<r.denom<<endl;
			return output;
		}
		friend istream &operator>>(istream &input, Rational &r)
		{
			input>>r.num>>r.denom;
			return input;
		}
		
		
};

int main()
{
	Rational r1,r2(8,16),r3;
	r2.reduce();
	cout<<"enter the values:";
	cin>>r3;
	r3.reduce();
	cout<<r3;
}
