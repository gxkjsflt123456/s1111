#include<stdio.h>
int  myFunction(int x){
		if(x<=0){
		return 0;
		}
		return myFunction(x-1)+x;

	}
void main(){
	int b=4;
	printf("%d ",myFunction(b));
}
