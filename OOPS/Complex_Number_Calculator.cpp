#include <iostream>
class Complex;
class Calculator
{
public:
    int sum(int p1, int p2)
    {
        return (p1 + p2);
    }
    int sumRealpart(Complex, Complex);
    int sumImgpart(Complex o1, Complex o2);
};
class Complex
{
    int a, b;
    friend int Calculator::sumImgpart(Complex, Complex);
    friend int Calculator::sumRealpart(Complex, Complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displaynumber()
    {
        std::cout << "The number is " << a << " + i" << b << std::endl;
    }
};
int Calculator::sumRealpart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImgpart(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setnumber(2, 5);
    o2.setnumber(2, 4);

    o1.displaynumber();
    o2.displaynumber();

    Calculator calc;
    int y = calc.sumImgpart(o1, o2);
    int x = calc.sumRealpart(o1, o2);
    std::cout << "The sum of complex number is " << x << " + i" << y << std::endl;
}
