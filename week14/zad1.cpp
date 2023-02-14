#include <iostream>
#include <cmath>

using namespace std;

struct Point 
{
    int X, Y;
    double distance (int x, int y)
    {
        return sqrt((X - x) * (X - x) + (Y - y) * (Y - y));
    }
};

struct Line
{
    Point p1, p2;
    double length (void)
    {
        return p1.distance(p2.X, p2.Y);
    }
    bool compare (Line l2)
    {
        return length() == l2.length();
    }
    void printLine (void)
    {
        cout << "P1(" << p1.X << ", " << p1.Y << "), P2(" << p2.X << ", " << p2.Y << ") - " << length() << '\n';
    }
};

struct Triangle
{
    Line l1, l2, l3;
    bool valid (void)
    {
        return l1.length() < l2.length() + l3.length()  &&
               l2.length() < l3.length() + l1.length()  &&
               l3.length() < l1.length() + l2.length()  &&
               l1.p2.X == l2.p1.X && l1.p2.Y == l2.p1.Y &&
               l2.p2.X == l3.p1.X && l2.p2.Y == l3.p1.Y &&
               l3.p2.X == l1.p1.X && l3.p2.Y == l1.p1.Y ;
    }
    double circumference (void)
    {
        return l1.length() + l2.length() + l3.length();
    }
    double area (void)
    {
        return sqrt(  circumference() / 2 *
                     (circumference() / 2 - l1.length()) *
                     (circumference() / 2 - l2.length()) *
                     (circumference() / 2 - l3.length()) );
    }
    void printTriangle (void)
    {
        if (valid)
            cout << "Circumference = " << circumference() << ", area = " << area() << '\n';
        else
            cout << "Invalid triangle." << '\n';
    }
};

int main()
{
    return 0;
}
