#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  		int income, tax, discount=0;
		double taxrate=0.0;
		printf("請輸入綜合所得淨額：");
		scanf("%d", &income);
		switch(income){
    		case 0 ... 370000:
    			discount=0;
    			taxrate=0.06;
    		    break;
    		case 370001 ... 990000:
    			discount=25900;
    			taxrate=0.13;
    		    break;
    		case 990001 ... 1980000:
    			discount=105100;
    			taxrate=0.21;
    			break;
    		case 1980001 ... 3720000:
    			discount=283300;
    			taxrate=0.3;
    			break;
    		case 3720001 ... 2147483647:
    			discount=655300;
    			taxrate=0.4;
                break;
      		default:
    			printf("  請輸入大於等於0的數值!!\n\n");
    	        system("PAUSE");	
    			exit(0);
        }
		tax=income * taxrate ;
		printf("\n");
		printf("  綜合所得淨額： %d 元\n", income);
		printf("  稅        額： %2.0f ％\n", taxrate*100 );
		printf("  --------------------\n");
		printf("  稅        金： %d 元\n", tax);
		printf("  累 進 差  額： %d 元\n", discount);
		printf("--------------------\n");
		printf("  今年應納稅額： %d 元\n", tax-discount);
	
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
