#include<stdio.h>
int main(){
	int n,i=1;
	printf("nhap vao so nguyen tu 1-9:");
	scanf("%d",&n);
	for ( ;i <= 10 ; i++ ){
		int m=n*i;
		printf("%d * %d = %d\n",n,i,m);
	}
}
