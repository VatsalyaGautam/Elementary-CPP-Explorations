#include <iostream>
int main()
{
    int arr[5]={2,3,4,5,6};
    std::cout<<arr[3]<<std::endl;
    int* p= arr;
    std::cout<<"the value at arr[0] is"<<*p<<std::endl;
    std::cout<<"the value at arr[1] is"<<*(p+1)<<std::endl;
    std::cout<<"the value at arr[2] is"<<*(p+2)<<std::endl;


    return 0;


}
