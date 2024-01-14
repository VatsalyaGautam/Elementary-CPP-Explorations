#include <iostream>
int main()
{
    int a=3;int* b;
    b= &a;
    std::cout<<"The address of a is:"<<&a<<std::endl;
    std::cout<<"The address of a is:"<<b<<std::endl;
    std::cout<<"The value at address"<< b <<  "is:"<< *b <<std::endl;


    return 0;
}
