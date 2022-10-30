#include <iostream>
#include<conio.h>
using namespace std;
class tollbooth{
    unsigned int cars;
    double amount;
    public:
    tollbooth(){
        cars=0;
        amount=0;
    }
    void payingcar(){
        cars++;
        amount+=0.50;
    }
    void nonpayingcar(){
        cars++;
    }
    void display(){
        cout<<"Number of cars: "<<cars<<endl;
        cout<<"Total Amount: "<<amount<<endl;
    }
};
int main()
{
    tollbooth t;
    int c;
    char ch;
    do{
        cout<<"Press 1 for Paying Cars \nPress 2 for Non-Paying Cars"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>c;
        switch(c){
            case 1:
            t.payingcar();
            break;
            case 2:
            t.nonpayingcar();
            break;
            default: cout<<"Enter correct values"<<endl;
            break;
        }
        cout<<"Do you want to continue? Press 'Y' or Press ESC key to stop"<<endl;
        ch=getch();
        if(ch==27){
            t.display();
        }
        else{
            cout<<"Choose options:"<<endl;
        }
       
    }while(ch!=27);
    return 0;
}
