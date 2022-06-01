//Roll no:1020
//Name:Sagar Nitin Dhadke
//partical no:10


#include<stdio.h>
#include<conio.h>



void main()
{
   FILE *fptr;
   char str[20];
   clrscr();

   fptr=fopen("vck1.txt","w");

   if(fptr==NULL)
	{
	 printf("\nUnable to file");
	 getch();
	 exit();
	}
	else
	{
	printf("\nC file is opened succefully");
	printf("\nEnter string to be write in the file:");
	scanf("%s",str);
	fprintf("fptr",str);
	printf("\data written successfully");
	}
   fclose(fptr);
   getch();


}


/*output:

C file is opened succefully
Enter string to be write in the file:welcome to vck kolhap
data written successfully
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
