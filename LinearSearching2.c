#include <stdio.h>

int found = 0;

void linearSearching(int arr[5]){
	int data;
	printf("Enter the data to find: ");
	scanf("%d", &data );
	for( int j = 0; j < 5; j++){
		if( arr[j] == data ){
			printf("your data is found\n");
			found = 1;
			break;
		}
	}
	if( found == 0 ){
        	printf("your data not found\n");
	}
}

int main(){
	int arr[5];
	for( int i = 0; i < 5; i++){
		printf("Enter the data: ");
		scanf("%d", &arr[i]);
	}

	linearSearching(arr);
	return 0;

}


