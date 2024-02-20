'''
  printf("format string",argument_list);
scanf("format string",argument_list);
%d (integer), %c (character), %s (string), %f (float).
  
For ex: The scanf("%d",&number)

  Declare  variables: two of type int and two of type float.
  Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.

  
  Sample Input
10 4
4.0 2.0
  
Sample Output
14 6
6.0 2.0
  '''

  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);
    
    
    return 0;
}
