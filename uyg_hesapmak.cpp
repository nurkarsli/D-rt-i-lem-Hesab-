//write a c prog that applies the netred operation to entered 2 ints.
#include<stdio.h>
main(){
	int s1,s2;
	float result;
	char islem;
	printf("\nEnter the operation");
	scanf("%c",&islem);
	printf("\nEnter the first integer:");
	scanf("%d",&s1);
	printf("\nEnter the second integer:");
	scanf("%d",&s2);
	switch(islem){
		case '+':
			result=s1+s2;
			printf("\n%d+%d=%f",s1,s2,result);
			break;
		case '-':
			result=s1-s2;
			printf("\n%d-%d=%f",s1,s2,result);
			break;
		case '*':
			result=s1*s2;
			printf("\n%d*%d=%f",s1,s2,result);
			break;
		case '/':
			switch(s2){
				case 0:
					printf("\nThe divisior can not be zero!!");
					break;
					default:
						result=(float)s1/s2;   //tam olarak sonucu aldý
			            printf("\n%d/%d=%f",s1,s2,result);
		             	break;
						
			}
			break;
		default:
			printf("\nIncorrect operator entry");
			break;		
	}
}
