#include <iostream>
class Complex
{
    int a, b;
    friend Complex sumComplex(Complex , Complex );

public:
    void set_number(int, int);
    void display_number();
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.set_number((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

void Complex::set_number(int r, int i)
{
    a = r;
    b = i;
}
void Complex::display_number()
{
    std::cout << "Your number is " << a << "  +  i " << b << std::endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.set_number(1, 2);
    c1.display_number();

    c2.set_number(3, 4);
    c2.display_number();

    c3=sumComplex(c1, c2);
    c3.display_number();
    return 0;
}
