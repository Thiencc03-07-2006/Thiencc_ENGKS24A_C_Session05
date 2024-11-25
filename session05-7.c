#include <stdio.h>

int main(){
	int num1,num2;
	printf("vui long nhap vao 2 so:\n");
	scanf("%d %d",&num1,&num2);
	while(num1!=num2){
		if(num1>num2){
			num1-=num2;
		}else if(num1<num2){
			num2-=num1;
		}
	}
	printf("uoc chung lan nhat: %d",num1);
	return 0;
}
