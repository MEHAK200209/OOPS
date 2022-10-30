#include<iostream>
using namespace std;
void reverseit(char *p){
	int size=0;
	char *t;
	for(t=p; *t != '\0'; t++){
		size++;
	}
	cout<<size;
	char *begin=p;
	char *end=p;
	for(int i=0; i<size-1; i++){
		end++;
	}
	for(int i=0; i<size/2;  i++){
		char ch;
		ch=*end;
		*end=*begin;
		*begin=ch;
		
		*begin++;
		*end--;
	}
	
}
int main(){
	char text[40];
	cout<<"Enter a text you want to reverse: "<<endl;
	cin.getline(text,40);
	//cout<<text;
	reverseit(text);
	cout<<"Reverse text is: "<<text;
	return 0;
}
