#include"mypoint.h"
void sample_point()
{
    printf("point sample\n");
    int x,y;
    printf("put a's x and y\n");
    scanf("%d%d",&x,&y);
    mypoint a(x,y);
    printf("put b's x and y\n");
    scanf("%d%d",&x,&y);
    mypoint b(x,y);
    a.point_show();
    b.point_show();
    printf("the sum is %d\n",a*b);
    a=a+b+b;
    //a=x+b;int + point是不行的
    a.point_show();

    printf("\ncomplex sample\n");
    complex a1(2,3),a2(3,4),a4;
    printf("a1:");
    a1.complex_show();
    printf("a2:");
    a2.complex_show();
    printf("a3 is 4\n");
    //友元函数下这个int型进入了构造函数
    a4=4+a2;
    printf("a4 = a3 + a2");
    printf("\na4:");
    a4.complex_show();

}