#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
 	int salary;
	char name[20];
	
};

class manager:public employee
{
	public:
		char department[20];
		
	void get_data()
	{
		cout<<"MANAGER'S DETAILS-";
		cout<<"\nenter the NAME:";
		cin>>name;
		cout<<"\nenter the DEPARTMENT:";
		cin>>department;
		cout<<"\nenter the SALARY:";
		cin>>salary;
	}
	
	void display()
	{
		cout<<"\nManager's name : "<<name<<"\nDepartment : "<<department<<"\nsalary : "<<salary;
	}	
		
};

class executive:public manager
{
  public:
    void display(manager m1)
    {
	 cout<<"\nEXECUTIVE::"<<endl;
	 m1.display();
	}	
};

int main()
{
 	manager m;
 	m.get_data();
 	m.display();
 	executive e;
 	e.display(m);
	return 0;
}

