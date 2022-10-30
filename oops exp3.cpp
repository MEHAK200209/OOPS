/*Create the equivalent of a four function calculator. The program should request the user to enter a number,
an operator, and another number. It should then carry out the specified arithmetical operation:
adding, subtracting, multiplying, or dividing the two numbers. 
(It should use a switch statement to select the operation).
Finally it should display the result. When it finishes the calculation, the program should ask if the user
 wants to do another calculation.*/
 
#include<iostream>
#include<stdio.h>
using namespace std;
int fun1(int num1, char opr, int num2){
	int result;
	switch(opr)
{
	case'+':
		result= num1+ num2;
		break;
	case '-':
	    result= num1- num2;
		break;
	case '/':
	    result= num1 / num2;
		break;
	case '*':
	    result= num1* num2;
		break;
	default:
	    break;				
}
    cout<<result<<'\n';
    return result;
} 
int main()
{
	int num1,num2,ans;
	char opr, cont;
	do{
		cout<<"enter the first number:";
		cin>>num1;
		cout<<"enter the operator:";
		cin>>opr;
		cout<<"enter the second number:";
		cin>>num2;
		ans= fun1(num1, opr, num2);
		cout<<"the result is:"<<ans<<'\n';
		cout<<"do you want to continue?";
		cout<<"if yes enter 'y' if no enter 'n':";
		cin>>cont;
		if (cont=='y'||'Y')
		fun1(num1, opr, num2);
		else
		break;
	}
	while(cont=='y'||'Y');
	return 0;
	
}

