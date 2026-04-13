#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct employee emp[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the details of the employee %d\n",i+1);
        printf("enter id \n");
        scanf("%d,&emp[i].id");
        printf("enter name \n");
        scanf("%s",emp[i].name);
        printf("enter the salary\n");
        scanf("%s",emp[i].;
        salary);

    }
    return 0;
}
