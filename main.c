#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct StudentDetails
{
    char rollNo[10];
    char name[80];
    char Department[20];
    char course[20];
    int year;
}data[1000];

void searchyear(struct StudentDetails data[],int year,int n);
void searchViaRollNo(struct StudentDetails data[],char roll_Input[],int n);
int main()
{
    int n,newline=0;
    printf("How many data do you want to enter  ");
    scanf("%d",&n);
    //printf("%d",n);
    printf("\n\n Enter Data");

    for (int i=0;i<n;i++)
    {
        printf("\n\n\nEnter roll No(%d)   ",(i+1));
        fflush(stdin);
        gets(data[i].rollNo);
        printf("\nEnter name(%d)   ",i+1);
        gets(data[i].name);
        printf("\nEnter Department(%d)   ",i+1);
        gets(data[i].Department);
        printf("\nEnter course(%d)   ",i+1);
        gets(data[i].course);
        printf("\nEnter year(%d)  ",i+1);
        scanf("%d",&data[i].year);
    }
system("cls");

int input,choice =1;
printf("\n Enter 1 to search via year \nEnter 2 to search via roll Number");
scanf("%d",&input);
    if (input==1)
    {
    int year;
    printf("Input Year \n");
    fflush(stdin);
    scanf("%d",&year);
    searchyear(data,year,n);
    }

    printf("\n\n%d",input);

    if (input==2)
    {
    char roll_Input[20];
    printf("Enter roll number you want to search  ");
    fflush(stdin);
    gets(roll_Input);
    puts(roll_Input);
    printf("\n");
    searchViaRollNo(data,roll_Input,n);

    }
    else
    {
        printf("Invalid input ");

    }
    return 0;
}
void searchyear(struct StudentDetails data[],int year,int n)
{
    int check=0;
    for (int i=0;i<n;i++)
    {
        printf("\nName  ");
        if(data[i].year==year)
        {
            check=1;
            puts(data[i].name);
        }
    }
    if(check==0)
    {
        printf("No data found for the year %d",year);
    }

}
void searchViaRollNo(struct StudentDetails data[],char roll_Input[],int n)
{
    //puts(roll_Input);
    int check =0;
    for (int i=0;i<n;i++)
    {
        if(!strcmp(data[i].rollNo,roll_Input))
        {
            check=1;
            printf("\n\n\nName  ");
            puts(data[i].name);
            printf("\nDepartment  ");
            puts(data[i].Department);
            printf("\ncourse  ");
            puts(data[i].course);
            printf("\n Year  %d",data[i].year);
        }
    if(check==0)
    {
        puts(roll_Input);
        printf("No data found for the roll number ");

    }

    }

}
