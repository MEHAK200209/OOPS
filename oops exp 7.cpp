//VIRTUAL FUNC
#include<iostream>
using namespace std;
class father
{
    protected:
        int age;
    public:
        father(){
            age = 40;
        }
        father(int x){
            age = x;
        }
        virtual void iam(){
            cout<<"I am father,my age is: "<<age<<endl;
        }
};
class son:public father{
    public:
        son(){
            age = 16;
        }
        son(int x){
            age = x;
        }
        void iam(){
            cout<<"I am son,my age is: "<<age<<endl;
        }
};
class daughter:public father{
    public:
        daughter(){
            age = 20;
        }
        daughter(int x){
            age = x;
        }
        void iam(){
            cout<<"I am daughter,my age is: "<<age<<endl;
        }
};
int main()
{
    father F1(48),*ptr;
    son S1(14);
    daughter D1(22);
    F1.iam();
    S1.iam();
    D1.iam();
    ptr = &S1;
    S1.iam();
    ptr = &D1;
    D1.iam();
    return 0;
}

