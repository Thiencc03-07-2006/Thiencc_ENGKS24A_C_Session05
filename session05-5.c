#include <stdio.h>

int main(){
	int num=0,i=0;
	while(num<9){
		++num;
		printf("bang nhan so %d\n",num);
		i=0;
		while(i<10){
			++i;
		    printf("%d * %d = %d\n",num,i,num*i);
	    }
	}
	return 0;
}
