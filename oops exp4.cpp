/*A phone number, such as (212) 767-8900, can be thought of as having three parts: the area code (212), 
the exchange (767) and the number (8900). Write a program that uses a structure to store these three parts 
of a phone number separately. Call the structure phone. Create two structure variables of type phone. 
Initialize one, and have the user input a number for the other one. Then display both numbers.*/

#include<iostream>
#include<stdio.h>
using namespace std;
struct phone
{
	int area_code;
	int exchange;
	int number;
};
int main()
{
	phone A,B;
	cout<<"enter area code:";
	cin>>A.area_code;
	cout<<"enter exchange:";
	cin>>A.exchange;
	cout<<"enter the number:";
	cin>>A.number;
	B.area_code= 212;
	B.exchange=767;
	B.number= 8900;
	cout<<"My number is"<<"("<<A.area_code<<")"<<A.exchange<<"-"<<A.number<<"\n";
	cout<<"Your number is"<<"("<<B.area_code<<")"<<B.exchange<<"-"<<B.number<<"\n";
return 0;
}
