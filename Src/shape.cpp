#include "shape.h"
shape_type * circle=new circle_type(point_type(1,2),3);
shape_type * point=new point_type(1,2);
shape_type *(obj[3])={new circle_type(point_type(1,2),3),new point_type(1,2),new circle_type(point_type(1,2),3)}; 
void shape_out(){
    for(int i=0;i<=2;i++)
    {
        obj[i]->draw();
    }
    for(int i=0;i<=2;i++)
    {
        delete obj[i];
    }
}