#include<stdio.h>
#include<string.h>
void main(){
char c[60];
char d[66]="其他";
int b;
scanf("%s",&c);
	if(strcmp(c,"干饭")==0){
	printf("进入游戏");
while(b!=6){
	scanf("%d",&b);
	if(b>=7){
		printf("输入过大");}
	else if(b<=5){
		printf("输入过小");}
	else if(b==6){
		printf("你太厉害了");}
	else{
		printf("输入错误");}
	} }
else if(strcmp(d,"其他")==0){
	scanf("%s",&d);
	printf("请输入干饭");
}
else{
printf("1");
}
}
