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
scanf("%d",&b);
 if(a<b){
printf("输入过大");
}
else if(a>b){
printf("输入过小");}
else if(a==b){
printf("你太厉害了");
}else{
printf("输入错误");
}
}
