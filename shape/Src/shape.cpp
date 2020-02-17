//c++例程shape父类指针指向派生类对象
#include "shape.h"
#include <vector>
#include <conio.h>
#include <opencv.hpp>
using namespace std;
using namespace cv;
shape_type *circle = new circle_type(point_type(1, 2), 3);
shape_type *point = new point_type(1, 2);
//vector<shape_type*> shape={new circle_type(point_type(1,2),3),new point_type(1,2),new circle_type(point_type(1,2),3)};
vector<shape_type *> shape;
void shape_out()
{
    char i;
    while (i!='q')
    {
        cout<<"1.添加一个圆\n2.添加一个点\n3.展示\n4.清屏\nq.退出\n";
        i=getch();
        switch (i)
        {
            int x, y, r;
        case '1':
            cout << "input the r and x,y point of the circle";
            cin >> r >> x >> y ;
            shape.push_back(new circle_type(point_type(x, y), r));
            break;
        case '2':
            cout << "input the and x,y of a point";
            cin >> x >> y;
            shape.push_back(new point_type(x, y));
            break;
        case '3':
            for (int i = 0; i < shape.size(); i++)
            {
                cout<<i<<".";
                shape[i]->draw();
            }
            break;
        case '4':
            system("cls");
            break;
        }
    }
    for (int i = 0; i < shape.size(); i++)
        {
            delete shape[i];
        }
}
void sample()
{
    cout<<"run shape sample,运行c++例程shape父类指针指向派生类对象\n";
    shape_out();
}