//roll no:1020
//name:Sagar Nitin Dhadke
//practical no: 8



#include<stdio.h>
#include<conio.h>
#include<string.h>

 union anime
 {
	 char name[25];
	 char ctg[25];
	 char lang[23];
	 int  year;

 }a;

 void main()
 {
   clrscr();

   printf("\nEnter the name of the anime:");
   scanf("%s",a.name);
   printf("\nName:%s",a.name);

   printf("\nEnter the category of the anime:");
   scanf("%s",a.ctg);
   printf("\nCategory:%s",a.ctg);

   printf("\nENter the language :");
   scanf("%s",a.lang);
   printf("\nLanguege:%s",a.lang);

   printf("\nEnter the release year of the anime:");
   scanf("%d",a.year);
   printf("\nYear:%d",a.year);
   getch();

}
/*
output

Enter the name of the anime:naruto

Name:naruto
Enter the category of the anime:action

Category:action
ENter the language :english

Languege:english
Enter the release year of the anime:1997

Year:1997
*/
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                






                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                










