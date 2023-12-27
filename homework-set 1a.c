// pgm to calculate the perimeter of a rectangle

#include<stdio.h>

int main(){
 int length,width,perimeter;
 printf("Enter the length of the rectangle : ");
 scanf("%d",&length);
 printf("Enter the width of the rectangle : ");
 scanf("%d",&width);
 printf("Length is %d and Width is %d\n",length,width);
 perimeter = 2*(length+width);
 printf("Perimeter of the rectangle is %d", perimeter); 
return 0;
}
