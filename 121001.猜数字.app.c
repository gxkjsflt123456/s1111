#include<stdio.h>
#include<string.h>
void main(){
char c[60];
char d[66]="其他";
int a=6;
int b;
	if(strcmp(c,"干饭")==0){
	scanf("%s",&c);
printf("进入游戏");}
else if(strcmp(d,"其他")==0){
	scanf("%s",&d);
	printf("请输入干饭");
}
switch(0){
	scanf("%d",&b);
case 1 :printf("输入过大");
case 2 :printf("输入过小");
case 3 :printf("你太厉害了");break;
case 4 :printf("输入错误");
}
}
