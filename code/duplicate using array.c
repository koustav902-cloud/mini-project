#include<stdio.h>
int main()
{
    int n, i, j, flag = 0;
    printf("\n Enter how many numbers: ");
    scanf("%d", &n);
    int a[n];
    printf("\n Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if (flag==1)
        printf("\n Duplicate number found!");
    else
        printf("\n No duplicates found.");
    return 0;
}
