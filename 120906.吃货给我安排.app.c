#include<stdio.h>
#include<string.h>
void main(){
	char a1[600];
	printf("吃货的日程总是被安排的明明白白，请问现在是什么节？");
	scanf("%s",&a1);
if(strcmp(a1,"春节")==0){
printf(" 给我安排饺子 ");}
else if(strcmp(a1,"中秋节")==0){
	printf("给我安排月饼");}
else if(strcmp(a1,"端午节")==0){
    printf("给我安排粽子");}
else if(strcmp(a1,"元宵节")==0){
    printf("给我安排元宵");}
else{
    printf("输入错误");
}
}
