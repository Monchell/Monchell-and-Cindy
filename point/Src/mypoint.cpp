#include"mypoint.h"
mypoint mypoint:: operator+(mypoint p)//点向量加法
{
    mypoint sum;
    sum.x=x+p.x;
    sum.y=y+p.y;
    return sum;
}
int mypoint:: operator*(mypoint p)//点向量数乘法
{
    int sum;
    sum=(x*p.x)+(y*p.y);
    return sum;
}
void mypoint::point_show()
{
    printf("the point is (%d,%d)\n",x,y);
}
void complex::complex_show()
{
    printf("the complex is (%d,i%d)\n",x,y);
}
complex operator+(complex a,complex b)//点向量加法
{
    int r=a.x+b.x;
    int i=a.y+b.y;
    return complex(r,i);
}
complex & complex:: operator++()   //前置自增表达式++A
{
    this->x++;
    this->y++;
    return *this;
}
complex complex:: operator++(int)   //后置自增表达式A++
{

    complex temp=*this;
    this->x++;
    this->y++;
    return *this;
}
mypoint operator++(mypoint & a,int)
{
    mypoint temp=a;
    a.x++;
    a.y++;
    return temp;
}
mypoint & operator++(mypoint & a)
{
    a.x++;
    a.y++;
    return a;
}