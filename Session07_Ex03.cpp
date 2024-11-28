#include <stdio.h>

int main(){
	int num[]={3,7,2,4,9}, count=1;
    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++){
		if(num[i] % 2 ==0){
			count++;
			printf("Cac so chan co trong mang la: %d\n", num[i]);
		}
	}
	if(count==1){
		printf("Khong co so chan trong mang");
	}
	return 0;
}
