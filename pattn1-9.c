#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,a,b,j;
		for(i=1;i<=9;i++){
		for(j=9;j>i;j--){
			printf(" ");
		}

 			for(a=1;a<=i;a++){
				printf("%d",a);
			}
			for(b=(i-1);b>0;b--){
				printf("%d",b);
			}
				printf("\n");

	}
	
	return 0;
}