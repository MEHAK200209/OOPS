//sept 8
/*1. Raising a number n to a power p is the same as multiplying n by itself p times. 
Write a function called power ( ) that takes a double value for n and an int value for p,
 and returns the result as double value. Use a default argument of 2 for p, 
so that if this argument is omitted, the number will be squared. 
Write a main ( ) function that gets values from the user to test this function.*/

#include<iostream>
using namespace std;
double power(double n, int p){
	double result;
	result=1;
	for(int i=0; i<p; i++){
		result= result*n;
	}
	return result;
}
int main()
{
	double num;
	int pow, output, ch;
	cout<<"enter the number:";
	cin>>num;
	cout<<"enter 1 if you want to add power and 0 if you want to use default power:";
	cin>>ch;
	if(ch==0){
		output= power(num,2);
	}
	else{
		cout<<"enter the power:";
		cin>>pow;
		output= power(num, pow);
	}
	cout<<"the result is:"<<output;
}


