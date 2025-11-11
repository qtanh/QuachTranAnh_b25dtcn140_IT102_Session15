#include<stdio.h>
void bubble(int n, int arr[100]){
	for(int i =0; i<n;i++){
		for(int j = 0; j<n; j ++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
		printf("%d\t",arr[i]);
	}
}
int main(){
	int i,n,arr[100];
	printf("Limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	bubble(n,arr);
}
