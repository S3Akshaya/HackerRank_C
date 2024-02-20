''' 
  
You have to print the character, , in the first line. 
  Then print  in next line. 
  In the last line print the sentence, .

Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To C!!
  '''

  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("\n%[^\n]s",s);
    scanf("\n%[^\n]s",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
       
    return 0;
}

  
