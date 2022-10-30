#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,num,end,mid,beg,m;
	cout<<"enter the size of array:";
	cin>>num;
	cout<<"\nenter the values in sorted aarray:";
	for (i=0;i<num;i++)
	{
		cout<<"arr["<<i<<"]=";
		cin>>arr[i];
	}
	
	beg=0;
	end=num-1;
	cout<<"enter value to be searched=";
	cin>>m;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==m)
		{
			cout<<"element found";
			
		}
	}
}
