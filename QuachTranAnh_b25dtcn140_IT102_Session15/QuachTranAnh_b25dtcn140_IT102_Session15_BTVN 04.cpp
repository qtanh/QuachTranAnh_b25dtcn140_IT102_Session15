#include<stdio.h>
void total(int n, int arr[100]){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum +=arr[i];
	}
	
	printf("%d", sum);
}
int main (){
	int n,i;
	int arr[100];
	printf("Limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d", & arr[i]);
	}
	total(n,arr);
}
