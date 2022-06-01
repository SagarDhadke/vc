//roll no:1020
//name:Sagar Nitin Dhadke
//practical no:5

#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int *ptr;
	clrscr();

	printf("\nEnter the any number:");
	scanf("%d",&a);

	ptr=&a;

	printf("\nby using a--------");
	printf("\nadress of the a:%d",&a);
	printf("\nvalue of the a:%d",a);

	printf("\nby using pointer-----");
	printf("\nadress of the a:%d",ptr);
	printf("\nvalue of the a:%d",*ptr);

	getch();
}
