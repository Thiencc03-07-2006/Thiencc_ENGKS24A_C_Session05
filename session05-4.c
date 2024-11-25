#include <stdio.h>

int main(){
	int num=0,i=0;
	while(num<1||num>9){
		system("cls");
		printf("nhap vao bang cuu chuong can xem: ");
		scanf("%d",&num);
	}
	while(i<10){
		++i;
		printf("\n%d * %d = %d",num,i,num*i);
	}
	return 0;
}
