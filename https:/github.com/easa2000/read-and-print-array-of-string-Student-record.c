//array of string
//read and print number of n students

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    char names[50][50];
    printf("\n Enter the number of students:");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        printf("\n Enter the name of student %d: ",i+1);

        gets(names[i]);
    }
    printf("\n Students names are: ");
    for(i=0;i<=n;i++)
    {
        puts(names[i]);
    }
    getch();
}
