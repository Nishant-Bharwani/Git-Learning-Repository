// 27 November 2020
// Program to print the pattern2

/*

* 
* *
* * *
* * * *

*/

#include <stdio.h>
void main()
{
    int n;
    printf("Enter pattern size: ");
    printf("\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
        
    }
    
    
}
