#include<stdio.h>
int main(){
	int a,b;
	int i = 1;
	float c,c1;
	printf("nhap vao 2 so nguyen:");
	scanf("%d %d",&a,&b);
	do{

    printf("**************chon phep tinh********\n");
    printf("1. cong\n");
    printf("2. tru\n");
    printf("3. nhan\n");
    printf("4. chia\n");
    printf("5. chia lay du\n");
    printf("6. UCLN\n"); 
    printf("7. BCNN\n");
    printf("8. thoat\n");
    printf("Lua chon cua ban:");
    //2. Khái bao bien choice chua gia tr? L?a ch?n c?a khách hàng
    int choice; scanf("%d",&choice);
    switch(choice) {
    case 1:
        printf("%d + %d = %d\n",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d\n",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d\n",a,b,a*b);
        break;
    case 4:
    	c = (float)a/b;
        printf("%d / %d = %f\n",a,b,c); 
        break;
	case 5:
        c = a%b;
        printf("%d mod %d = %f\n",a,b,c);
        break;
    case 6:
      	for(; i <= a || i <= b; i++) {
                    if( a%i == 0 && b%i == 0 )
                        c = i;
                }
		    	printf("UCLN(%d,%d) = %d\n",a,b,c);
        break;
    case 7:
        for(; i <= a || i <= b; i++) {
                    if( a%i == 0 && b%i == 0 )
                        c = i;
                }
                c1=a*b/c;
                printf("BCNN(%d,%d) = %d\n",a,b,c1);
        break;
    case 8:
        exit(0);
    default:
        printf("Vui long chon tu 1-7\n");
    }
    } while ("Vui long cho tu 1 - 7\n");
}
