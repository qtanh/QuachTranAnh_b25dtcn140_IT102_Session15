#include<stdio.h>
void mostAppear(int n, int arr[100]){
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
			count+=1;
		}
		}
	}
	printf("Most frequent exits number got %d times loop",count);
}
int main(){
	int n,i;
	int arr[100];
	printf("Limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	mostAppear(n,arr);
}
