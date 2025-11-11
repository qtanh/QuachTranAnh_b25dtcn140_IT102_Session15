#include<stdio.h>
void total(int n){
	int sum = 0;
	while(n>0){
		int digit=n%10;
		sum+=digit;
		n/=10;
	}
	printf("%d",sum);
}
int main(){
	int n;
	printf("Enter integer N: ");
	scanf("%d",&n);
	total(n);
}
