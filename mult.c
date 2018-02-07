# include <stdio.h> 
# include <conio.h>
int main() 
{ 
 int i, a, c ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &a) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &c) ; 
 printf("\nThe numbers divisible by %d are :\n\n", c) ; 
 for(i = 1 ; i <= a ; i++) 
  if(i % c == 0) 
   printf("%d\t", i) ; 
 return 0; 
}
