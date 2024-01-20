#include <iostream>
class Employee{
    int a,b,c,d;
    public:
    int e;
    void set_data(int,int,int,int);
    void get_data();
};
void Employee :: set_data(int p,int q, int r,int s)
{
    a=p;
    b=q;
    c=r;
    d=s;
}
void Employee:: get_data(){
    std::cout<< "The value of a is"<<a<<std::endl; 
    std::cout<< "The value of b is"<<b<<std::endl; 
    std::cout<< "The value of c is"<<c<<std::endl; 
    std::cout<< "The value of d is"<<d<<std::endl; 
    std::cout<< "The value of e is"<<e<<std::endl; 
}
int main()
{
    Employee Vatsalya;
    Vatsalya.e=25;
    Vatsalya.set_data(5,10,15,20);
    Vatsalya.get_data();
    return 0;
}
