#include <stdio.h>

int main(){
	int num1,num2;
	printf("vui long nhap vao 2 so:\n");
	scanf("%d %d",&num1,&num2);
	int num1Div=num1,num2Div=num2;
	while(num1Div!=num2Div){
		if(num1Div>num2Div){
			num1Div-=num2Div;
		}else if(num1Div<num2Div){
			num2Div-=num1Div;
		}
	}
	printf("boi chung nho nhat: %d",abs(num1*num2)/num1Div);
	return 0;
}
