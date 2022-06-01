//roll no: 1020
//name: Sagar Nitin Dhadke
//practical:p6


//Call by Value Example - Swapping 2 numbers using Call by Value
#include <stdio.h>
 
 
void swap(int, int);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}

/*
Output:
Enter the value of x and y
Before Swapping
x = 10
y = 5
Values of a and b is 5 10
After Swapping
x = 10
y = 5
*/

//swaping  using call by reference

#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
/*
out[ut:]

Enter the value of x and y
8 9
Before Swapping
x = 8
y = 9
After Swapping
x = 9
y = 8
*/