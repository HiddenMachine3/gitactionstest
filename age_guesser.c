#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * guess a person's age by
 * asking the user to select a number b/w 1 to 9
 */

int main()
{
    time_t t;srand((unsigned)time(&t));
    int n;
    printf("Select a number b/w 1 to 9 : ");
    scanf("%d", &n);

    printf("Your age might be %d",(int)(rand()/(float)RAND_MAX));

    return 0;
}