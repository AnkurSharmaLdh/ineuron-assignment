/* C program to find all roots of a quadratic equation using switch case */
#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c;
  float root1,root2,imaginary;
  float D;
  printf("Enter the value of a,b,c:");
  scanf("%f %f %f",&a, &b, &c);
  D=(b*b)-(4*a*c);
  switch(D>=0)
  {
    case 1:
    {
    root1 = (b*b + sqrt(D))/(2*a) ;
    root2 = (b*b - sqrt(D))/(2*a) ;
    if(root1 != root2)
    {
    printf("Real and distinct Roots are %0.2f and %0.2f",root1,root2);
    break;
    }
    else
    {
    printf("Equal Roots are %0.2f and %0.2f",root1,root2);
    break;
    }
    }
    case 0:
    {
    root1 = -b / (2 * a);
    root2 = -b / (2 * a);
    imaginary = sqrt(-D) / (2 * a);
    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
  }
  }
return 0;
}