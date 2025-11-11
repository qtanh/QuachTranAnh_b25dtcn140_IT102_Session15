#include<stdio.h>
void minus(int a, int b){
	if(a>b){
		int tmp = a-b;
		printf("%d",tmp);
	}else{
		int tmp = b-a;
		printf("%d",tmp);
	}
}
int  main(){
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	minus(a,b);
}
