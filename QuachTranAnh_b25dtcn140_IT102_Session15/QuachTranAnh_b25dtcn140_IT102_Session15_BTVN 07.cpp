#include<stdio.h>
int binary(int n, int arr[100], int searchValue){
	printf("Enter value want to find: ");
	scanf("%d",&searchValue);
	int left = 0;
	int right = n-1;
	for(int i=0;i<n-1;i++){
			while(left<=right){
				int mid = left + (right-left)/2;
				if(arr[mid]=searchValue){
					printf("Found %d at arr[%d] ",searchValue,i);
					return mid;
				}else if(arr[mid]<searchValue){
					left = mid+1;
				}else{
					right = mid -1;
				}
			}
	}
	return -1;
}
int main(){
	int i,n,arr[100],searchValue;
	printf("Limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	binary(n,arr,searchValue);
}
