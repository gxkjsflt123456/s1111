# s1111
#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a>=-1 && a<=0){
printf("花呗人");
}
else if(a<=500 && a>0 ){
	printf("赤贫");
}
else if(a<=1500 && a>=501 ){
	printf("贫困");
}
else if(a<=3000 && a>=1501 ){
	printf("普通打工人");
}
else if(a<=5000 && a>=3001 ){
	printf("普通清洁工");
}
else if(a<=12000 && a>=5001 ){
	printf("水电工工资");
}
else if(a<=12000 && a>=50000){
printf("脑袋大脖子粗不是老板就是伙夫");
}
else if(a<=2000000 && a>=50001){
printf("程序员");
}
else{
	printf("输入错误");
}

}
