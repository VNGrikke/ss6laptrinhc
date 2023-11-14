#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,max,min;
	printf("nhap vao 3 so: ");
	scanf("%d %d %d",&a,&b,&c);
	do{

    printf("**************chon phep tinh********\n");
    printf("1. tong\n");
    printf("2. tbc\n");
    printf("3. maxmin\n");;
    printf("4. thoat\n");
    int choice;
    printf("Lua chon cua ban:");
    scanf("%d",&choice);
    switch(choice) {
    case 1:
        printf("%d + %d + %d = %d\n",a,b,c,a+b+c);
        break;
    case 2:
        printf("%d\n",a+b+c/3);
        break;
    case 3:
       	max = ( a > b && a > c )?a: (( b > c )?b:c);
		min = ( a < b && a < c )?a: (( b < c )?b:c);
	printf("max:%d min:%d\n",max,min);
        break;
    case 4:
        exit(0);
    default:
        printf("Vui long chon tu 1-4\n");
    }
    } while ("Vui long cho tu 1 - 4\n");
}
