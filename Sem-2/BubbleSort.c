/*Implement bubble sort for an unsorted sequence of integers

Input Format

n - input size
N -unsorted input elements

Output Format

N' - sorted elements*/
#include<stdio.h>
int main()
{
    int arr[100], n, c, d, swap;
    scanf("%d", &n);
    for(c=0; c<n; c++)
    {
        scanf("%d", &arr[c]);

    }
    for(c=0; c<n-1; c++)
    {
        for(d=0; d<n-c-1; d++)
        {
            if(arr[d]>arr[d+1])
            {
                swap = arr[d];
                arr[d] = arr[d+1];
                arr[d+1] = swap;
            }

        }
    }
    for(c=0; c<n; c++)
    {
        printf("%d\n", arr[c]);
    }
    return 0;

}