/*Create two classes DM and DB which store the value of distances. DM stores distances in metres and 
centimeters and DB in feet and inches. Write a program that can read values for the class objects and add one
object of DM with another object of DB. Use a friend function to carry out the addition operation. The object
that stores the results maybe a DM object or DB objects, depending on the units in which the results are 
required. The display should be in the format of feet and inches or metres and cenitmetres depending on the 
object on display.*/

#include<iostream>
using namespace std;
class DB;
class DM{
	double metre,centi;
	public:
		void get_value(){
			cout<<"entre distance in metre centi:";
			cin>>metre>>centi;
		}
		void display()
		{
			cout<<"metre:"<<metre<<"centimeter:"<<centi;
		}
		friend int add(DM &, DB &);
};
class DB{
	double feet, inches;
	public:
		void get_value(){
			cout<<"entre distance in feet inches:";
			cin>>feet>>inches;
		}
		void display(){
			cout<<"feet:"<<feet<<"inches:"<<inches;
		}
		friend int add(DM &, DB &);
};
int add(DM &x, DB &y){
	int choice,i,j;
	cout<<"entre 1 to get result in metre-centi and 2 for feet-inches:";
	cin>>choice;
	if(choice==1){
	DM a;
	i=(x.metre*100+x.centi+y.feet*30.48+y.inches*2.54);
	if(i>=100){
		a.metre= i/100;
		a.centi= i%100;
		a.display();	}
	else{
		a.metre=0;
		a.centi =i;
		a.display();
	}
	}
	else{
		DB b;
		j= (x.metre*39.37+x.centi/2.54+y.feet*12+y.inches);
		if(j>12){
			b.feet=j/12;
			b.inches=j%12;
			b.display();
		}
		else{
			b.feet=0;
			b.inches=j;
			b.display();
		}
	}
}
int main(){
	DM x;
	DB y;
	x.get_value();
	y.get_value();
	add(x,y);
	}
