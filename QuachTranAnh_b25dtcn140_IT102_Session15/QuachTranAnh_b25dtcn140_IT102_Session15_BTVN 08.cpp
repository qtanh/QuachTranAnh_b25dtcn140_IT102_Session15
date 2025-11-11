
#include<stdio.h>
#include<stdlib.h>
int removeDupe(int n, int arr[100],int delValue){
	for(int i=0;i<n;i++){
				delValue=arr[i];
				for(int j = i+1;j<n;j++){
					if(delValue==arr[j]){
						for(int k=j;k<n-1;k++){
							arr[k]=arr[k+1];
						}
						n--;
						j--;
					}
				}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int n,i,arr[100],delValue,choice;
	do{
		printf("\n1,Enter limit and elements\n");
		printf("2.Remove duplicate\n");
		printf("3.Exit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:	
				printf("Limit: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("arr[%d] = ",i);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				removeDupe(n,arr,delValue);
				break;
			case 3:
				printf("Thanks for using");
				exit(0);
				break;
		}
	}while(1);
}
