#include <iostream>
void sample_point();
class mypoint
{
    public:
    mypoint(int x=0,int y=0):x(x),y(y){};
    mypoint operator+(mypoint p);//�������ӷ�
    int operator*(mypoint p);//���������˷�
    friend mypoint operator++(mypoint &,int);
    friend mypoint & operator++(mypoint &);
    void point_show();
    private:
    int x,y;
};
class complex
{
    public:
    complex(int x=0,int y=0):x(x),y(y){};
    complex & operator++();
    complex operator++(int);
    int operator*(complex p);//���������˷�
    void complex_show();
    friend complex operator+(complex a,complex b);//�������ӷ�
    private:
    int x,y;
};