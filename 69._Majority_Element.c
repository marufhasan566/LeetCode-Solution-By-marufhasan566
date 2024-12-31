#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int length = sizeof(array) / 4;
    int major = length / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
    }

    return 0;
}