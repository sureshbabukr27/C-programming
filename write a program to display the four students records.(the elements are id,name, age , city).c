#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
    char city[20];
};
int main()
{
struct student s[4]={
    {101,"anu",20,"kolar"},
    {102,"abhi",20,"kolar"},
    {103,"basu",19,"hcross"},
    {104,"vasan",20,"los angles"},
};
for(int i=0;i<4;i++)
{
    printf("id:%d,name:%s\n,age:%d,city:%s\n",s[i].id,s[i].name,s[i].age,s[i].city);
}
return 0;
}
