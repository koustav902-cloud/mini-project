#include <stdio.h>
int main()
{
    int A[10][7];
    for(int i=0;i<10;i++)
    {
    for(int j=0;j<7;j++)
    {
    scanf("%d",&A[i][j]);
    }
}
    int studentTotal[10]={0};
    int dayTotal[7]={0};
    for(int i=0;i<10;i++)
{
    for(int j=0;j<7;j++)
{
    studentTotal[i]+=A[i][j];
    dayTotal[j]+=A[i][j];
}
}
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");
    printf("Total Present Days:\n");
    for(int i=0;i<10;i++)
{
    printf("Student %d: %d\n",i+1,studentTotal[i]);
}
    int maxAttendance=studentTotal[0];
    int studentIndex=0;
    for(int i=1;i<10;i++)
{
    if(studentTotal[i]>maxAttendance)
{
    maxAttendance=studentTotal[i];
    studentIndex=i;
}
}
    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",studentIndex+1,maxAttendance);
    int minDay=0;
    for(int j=1;j<7;j++)
{
    if(dayTotal[j]<dayTotal[minDay])
{
    minDay=j;
}
}
    printf("\nDay with Lowest Overall Attendance: Day %d\n",minDay+1);
    return 0;
}
