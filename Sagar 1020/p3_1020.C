//roll no:1020
//name:Sagar Nitin Dhadke
//practical no: 3

//auto
#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // printing initial default value of automatic variables a, b, and c.   
return 0;  
}  
/*Output:

13372800  0.000000

Ex*/

//static
#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[100];  
int main ()  
{  
printf("%d %d %f %s",c,i,f); // the initial default value of c, i, and f will be printed.   
};
/* Output:

0 0 0.000000 
*/

//Registor
 #include <stdio.h>  
int main()  
{  
register int a; // variable a is allocated memory in the CPU register. The initial default value of a is 0.   
printf("%d",a);  
}  

// output:

// o

//extern
#include <stdio.h>  
int main()  
{  
extern int a;   
printf("%d",a);  
}  
// Output

// main.c:(.text+0x6): undefined reference to `a'
// collect2: error: ld returned 1 exit status
