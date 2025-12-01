#include<stdio.h>
int main()
{
    int marks[5][3];
    int i, j;
    int highest[3]={0,0,0};

    for(i=0;i<5;i++)
    {
        printf("\n Student %d: ", i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        highest[j]=marks[0][j];
        for(i=1;i<5;i++)
        {
            if(marks[i][j]>highest[j])
            {
                highest[j]=marks[i][j];
            }
        }
    }
    printf("\n Highest marks in Mathematics: %d\n", highest[0]);
    printf("\n Highest marks in Physics: %d\n", highest[1]);
    printf("\n Highest marks in Computer Science: %d\n", highest[2]);
    return 0;
}
