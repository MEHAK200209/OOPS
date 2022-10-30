#include<iostream>
using namespace std;
struct Point
{
	int x;
	int y;
};
int main()
{
	Point A,B,C;
	cout<<"enter the cordinates of A:";
	cin>>A.x;
	cin>>B.x;
	cout<<"\nenter the cordinates of B:";
	cin>>B.x;
	cin>>B.y;
	C.x= A.x+ B.x;
	C.y= B.x+ B.y;
	cout<<"the cordinates of C is "<<C.x<<" "<<C.y;
}
