#include<stdio.h>
void main(){
	int l=91;
int a,b;

int c2d[9][10]={{0,0,0,0,0,0,0,0,0,0}};
for(a=0;a<9;a++){
for(b=0;b<10;b++)
{ l--;
c2d[a][b]=l;
printf("%d ",c2d[a][b]);
	 }
}
printf("\n");
}
