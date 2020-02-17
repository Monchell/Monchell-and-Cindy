#include <iostream>
class mypoint
{
    public:
    mypoint operator+(mypoint p);//点向量加法
    int operator*(mypoint p);//点向量数乘法
    mypoint &operator++();//点向量加法
    int x,y;
};