#include<iostream> 
#include<fstream> 
using namespace std; 
struct s_date { int date; int month; int year; };
class hospital
{ public: 
 string name;
 string disease;
 s_date doa; 
 s_date dod; 
 public: 
 void getdata(){
        cout<<"Enter Name of the patient: "<<endl; 
        cin>>name;
        cout<<"Enter Disease: "<<endl; 
        cin>>disease;
        cout<<"Enter the Date of admission: "<<endl; 
        cin>>doa.date>>doa.month>>doa.year;
        cout<<"Enter the Date of discharge: "<<endl; 
        cin>>dod.date>>dod.month>>dod.year;
        } 
 void display(){
        cout<<"\nName of the Patient: "<<name<<endl; 
        cout<<"Disease: "<<disease<<endl; 
        cout<<"Date of Admission: "<<doa.date<<"/"<<doa.month<<"/"<<doa.year<<endl; 
        cout<<"Date of Discharge: "<<dod.date<<"/"<<dod.month<<"/"<<dod.year<<endl; 
        } 
};
class hospital_age: public hospital{ 
  public: 
  unsigned int age; 
  public: 
    void display(hospital h){ 
     cout<<"Enter Age: "<<endl; 
     cin>>age; 
     h.display(); 
     cout<<"Age of the Patient: "<<age<<endl;
     fstream f1; 
     f1.open("Hospital.txt",ios::in|ios::out|ios::app); 
     f1<<"\nName:"<<name<<" "<<"\nDisease:"<<disease<<" "<<"\nDate_of_admission:"<<doa.date<<"/"<<doa.month<<"/"<<doa.year<<" "<<"\nDate_of_discharge:"<<dod.date<<"/"<<dod.month<<"/"<<dod.year<<" "<<"\nAge:"<<age; 
     f1.close(); } 
}; 
int main(){
hospital_age h1; 
h1.getdata(); 
h1.display(h1);
return 0; 
}
