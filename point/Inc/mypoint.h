#include <iostream>
class mypoint
{
    public:
    mypoint operator+(mypoint p);//�������ӷ�
    int operator*(mypoint p);//���������˷�
    mypoint &operator++();//�������ӷ�
    int x,y;
};