# s1111
#include<stdio.h>
void main(){
int x,y;
scanf("%d",&x);

if( x<=0){
	printf("%d",x);
}
else if( 1<=x<10){
printf("%d",2*x-1);
}
else if(x>=10){
printf("%d",3*x-11);
}
}
