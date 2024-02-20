''' 
Task

This challenge requires you to print "Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.Sample Input 0

Welcome to C programming.
Sample Output 0

Hello, World!
Welcome to C programming. 
'''
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("Hello, World!\n");
    printf("%s",s);    
    return 0;
}
