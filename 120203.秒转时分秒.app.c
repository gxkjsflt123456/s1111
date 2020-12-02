# s1111
#include<stdio.h>
int main(){
int a,b,c,d;
printf("请输入秒数");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%.2d时:",b);
printf("%.2d分:",c);
printf("%.2d秒",d);
}
