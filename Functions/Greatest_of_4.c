'''
  A sample syntax for a function is

	return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    	...
        ...
        ...
        [if return_type is non void]
        	return something of type `return_type`;
    }

Write a function int max_of_four(int a, int b, int c, int d) 
which reads four arguments and returns the greatest of them.

  Sample Input

3
4
6
5
Sample Output

6
'''

  #include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    {
        return a;
    }
    else if(b>a && b>c && b>d)
    {
        return b;
    }
    else if(c>a && c>b && c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/* ANOTHER METHOD 
int greatest = a;

if (b > greatest) {
    greatest = b;
}
if (c > greatest) {
    greatest = c;
}
if (d > greatest) {
    greatest = d;
} */
