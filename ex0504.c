#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  		int income, tax, discount=0;
		double taxrate=0.0;
		printf("�п�J��X�ұo�b�B�G");
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
    			printf("  �п�J�j�󵥩�0���ƭ�!!\n\n");
    	        system("PAUSE");	
    			exit(0);
        }
		tax=income * taxrate ;
		printf("\n");
		printf("  ��X�ұo�b�B�G %d ��\n", income);
		printf("  �|        �B�G %2.0f �H\n", taxrate*100 );
		printf("  --------------------\n");
		printf("  �|        ���G %d ��\n", tax);
		printf("  �� �i �t  �B�G %d ��\n", discount);
		printf("--------------------\n");
		printf("  ���~���ǵ|�B�G %d ��\n", tax-discount);
	
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
