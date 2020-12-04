#include<stdio.h>
#include<windows.h>
void main(){
int a,b; 
int c2d[20][10]={{999,999,999,999,999,999,999,999,999,999}};
for(a=0;a<20;a++){
for(b=0;b<10;b++)
{ c2d[a][b]=999;
printf("%d ",c2d[a][b]);
}
}
for(a=0;a<20;a++){
for(b=0;b<10;b++)
{ c2d[a][b]=0;
printf("%d ",c2d[a][b]);
}
}
for(a=0;a<20;a++){
for(b=0;b<10;b++)
{ c2d[a][b]=999;
Sleep(5000);
printf("%d ",c2d[a][b]);
}
}
}
