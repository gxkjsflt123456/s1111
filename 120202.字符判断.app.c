# s1111
#include<stdio.h>
void main(){
char v;
scanf("%c",&v);
switch(v){
case 'a':printf("你在点击“左”键\n");break;
case 's':printf("你在点击“下”键\n");break;
case 'w':printf("你在点击“上”键\n");break;
case 'd':printf("你在点击“右”键\n");break;
default:printf("输入错误\n");
}
}
