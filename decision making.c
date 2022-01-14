#include<stdio.h>
int main()
{
 int marks;
 printf("enter the marks= \n");
 scanf("%d",&marks)	;
 if(marks>=85)
 {
 	printf("\n Grade A");
 }
 else if(marks>=70)
 {
 	printf("\n Grade B");
 }
 else if(marks>=55)
 {
 	printf("\n Grade C");
 }
 else if(marks>=40)
 {
 	printf("\n Grade D");
 }
 else
 {
 	printf("\n Grade F");
 }
	return 0;
}
