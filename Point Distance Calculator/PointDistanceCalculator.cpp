#include <iostream>
#include <cmath>
class Point;
class Distance
{
public:
    int distance(Point, Point);
};
class Point
{
    int x, y;

    friend int Distance::distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display_data()
    {
        std::cout << "The location of the point is  (" << x << "," << y << ")" << std::endl;
    }
};
int Distance::distance(Point p, Point q)
{

    return (std::sqrt((pow(q.y - p.y, 2)) + (pow(q.x - p.x, 2))));
}

int main()
{
    Point p(1, 2);
    p.display_data();

    Point q(4, 3);
    q.display_data();

    Distance dist;
    int kms=dist.distance(p, q);
    std::cout<<"The distance between the points is "<<kms<<std::endl;
    return 0;
}
