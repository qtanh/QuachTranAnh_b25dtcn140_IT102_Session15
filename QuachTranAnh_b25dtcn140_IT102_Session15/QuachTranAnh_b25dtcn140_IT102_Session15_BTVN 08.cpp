//Chua xoa duoc het
#include<stdio.h>
#include<stdlib.h>
int removeDupe(int n, int arr[100],int delValue){
	for(int i=delValue;i<n-1;i++){
				arr[i]=arr[i+1];
	}
	return 1;
}
int main(){
	int n,i,arr[100],delValue,choice;
	do{
		printf("\n1,Enter limit and elements\n");
		printf("2.Print array out\n");
		printf("3.Choose number to delete\n");
		printf("4.Exit\n");
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
				for(i=0;i<n;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 3:
				printf("Enter value: ");
				scanf("%d",&delValue);
				removeDupe(n,arr,delValue);
				break;
			case 4:
				printf("Thanks for using");
				exit(0);
				break;
		}
	}while(1);
}
