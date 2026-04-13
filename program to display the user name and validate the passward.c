#include<stdio.h>
#include<string.h>
int main()
{
    char username[20],password[20];
    printf("enter username: ");
    scanf("%s,username");
    printf("enter password: ");
    scanf("%s,passeword");
    if (strcmp(username,validusername)== 0 && strcmp(password,validpassword))
    {
        printf("login successful! welcome,%s\n",username);
    }
    else
    {
        printf("invalid username and password.\n");
    }
    return 0;
}
