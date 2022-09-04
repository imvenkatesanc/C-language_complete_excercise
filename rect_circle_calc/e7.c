/* Rectangle

Area= l*b
perimeter= 2(l+b)

Cicle

Area= 22/7*r*r
perimeter= 2*22/7*r

*/
#include<stdio.h>
int main()
{
float l,b,Area,perimeter,r,circumference,area;
printf("Enter the rectangle length & breadth:");
scanf("%f%f",&l,&b);
printf("Enter the radius of a circle:");
scanf("%f",&r);
Area= l*b;
perimeter=(l+b)*2;
area=3.14*r*r;
circumference=2*3.14*r;
printf("\nArea of rectangle:%0.3f",Area);
printf("\nPerimeter of rectangle:%0.3f",perimeter);
printf("\nArea of circle:%0.3f",area);
printf("\nCircumference of circle:%0.3f",circumference);
return 0;
}
