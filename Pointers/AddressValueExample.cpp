#include <iostream>
int main()
{
    int b=3;int* a;
    a= &b;
    std::cout<<"The address of a is:"<<&b<<std::endl;
    std::cout<<"The address of a is:"<<a<<std::endl;
    std::cout<<"The value at address"<< a <<  "is:"<< *a <<std::endl;


    return 0;
}
