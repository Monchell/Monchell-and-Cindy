#include"mypoint.h"
mypoint mypoint:: operator+(mypoint p)//�������ӷ�
{
    mypoint sum;
    sum.x=x+p.x;
    sum.y=y+p.y;
    return sum;
}
int mypoint:: operator*(mypoint p)//���������˷�
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
complex operator+(complex a,complex b)//�������ӷ�
{
    int r=a.x+b.x;
    int i=a.y+b.y;
    return complex(r,i);
}
complex & complex:: operator++()   //ǰ���������ʽ++A
{
    this->x++;
    this->y++;
    return *this;
}
complex complex:: operator++(int)   //�����������ʽA++
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