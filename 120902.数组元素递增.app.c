#include<stdio.h>
void main(){
	int l=0;
int a,b;

int c2d[19][20]={{0,0,0,0,0,0,0,0,0,0}};
for(a=0;a<19;a++){
for(b=0;b<20;b++)
{ l++;
c2d[a][b]=l;
printf("%d ",c2d[a][b]);
	 }
}
printf("\n");
}
