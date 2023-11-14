#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,e,i,sum=0,max=0;
	
	printf("nhap vao so nguyen n:");
	scanf("%d",&n);
	do{

    printf("**************chon phep tinh*************\n");
    printf("1. in day so chia het cho 2(giam dan)\n");
    printf("2. in ra cac so nho hon n va tinh tong\n");
    printf("3. in ra cac uoc so chan cua n\n");
    printf("4. in ra cac uoc so le va sl cua n\n");
    printf("5. in ra uoc so le lon nhat cua n\n");
    printf("6. thoat\n");
    int choice;
    printf("Lua chon cua ban:");
	scanf("%d",&choice);
    switch(choice) {
    	case 1:
    		for(i=n;i>=2;i--){
    			if(i%2==0){
    				printf("%d\n",i);
				}
			}
        break;
        case 2:
        	for(i=n-1;i>0;i--){
    			printf("%d\n",i);
    			sum += i;
			}
			printf("%d\n",sum);
		break;
		case 3:
        	for(i=n;i>0;i--){
    				if(i%2==0&&n%i==0){
    					printf("%d\n",i);
				}
		}
		break;	
		case 4:
        	for(i=n;i>0;i--){
    				if(i%2!=0&&n%i==0){
    					printf("%d\n",i);
    					sum++;
				}
			printf("%d\n",sum);
		}
		break;
		case 5:
        	for(i=n;i<1;i--){
    			if(i%2!=0&&n%i==0){
    				if (max<i){
    					max = i;
					}
				}
				printf("%d\n",max);
		}
		break;		
    	case 6:
        	exit(e);
    	default:
        printf("Vui long chon tu 1-6\n");
    	}
    } while ("Vui long cho tu 1 - 6\n");
}
