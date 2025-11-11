#include<stdio.h>
void reverse(int n){
	int digit;
		int reversedNum = 0;
	while(n>0){
		digit=n%10;
		reversedNum = reversedNum*10+digit;
		n/=10;
	}
	printf("%d",reversedNum);
}
int main(){
	int n;
	printf("Enter integer N: ");
	scanf("%d",&n);
	reverse(n);
}
