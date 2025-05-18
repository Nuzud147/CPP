
//area and circumference of a circle
#include<iostream>
int main ()
{
    const double Pi=3.1416;
    double R=5;
    double area = Pi * R * R;
    double circumference = 2*Pi*R;

    std::cout<<area<<"m"<<'\n';
    std::cout<<circumference<<"m"<<'\n';

    return 0;
}
