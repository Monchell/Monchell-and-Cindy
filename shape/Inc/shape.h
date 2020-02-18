#include <iostream>
void shape_out();
void sample_shape();
class shape_type
{
    public: 
        virtual void draw(){};
};
class point_type : public shape_type
{
    public: int x,y;
    point_type(int x_value,int y_value):x(x_value),y(y_value){};
    virtual void draw()
    {
        std::cout<<'('<<x<<','<<y<<')'<<'\n';
    }
};
class circle_type : public shape_type
{
    public: int r;
    circle_type(point_type p_value,int r_value):r(r_value),p(p_value){};
    point_type p;
    void draw()
    {
        p.draw();
        std::cout<<"and the r is "<<r<<'\n';
    }
};