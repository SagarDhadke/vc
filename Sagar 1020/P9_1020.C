
//roll:1020
//name:Sagar Nitin Dhadke
//practical:9


#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fptr;
	char str[25];
	clrscr();

	fptr=fopen("bca1.txt","w");

	if(fptr==NULL)
	{
		printf("\nUnable to open file");
		exit();
	}

	else
	{
		printf("\nFile open succesfully");
		printf("\nenter the string:");
		scanf("%s",str);

		fprintf(fptr,str);
		fclose(fptr);
	}


	fptr=fopen("bca1.txt","r");

	if(fptr==NULL)
	{
		printf("\nUnable to open file");
		exit();
	}

	else
	{
		printf("\nFile open succesfully");
		fscanf(fptr,"%s",str);
		printf("file data:%s",str);
		fclose(fptr);
	}

	getch();

	}