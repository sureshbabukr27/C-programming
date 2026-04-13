#include<stdio.h>
#include<string.h>
int main()
{
    char username[20],password[20];
    printf("enter username:");
    scanf("%s",username);
    printf("enter password:");
    scanf("%s",password);
    if (strcmp(password,"admin123")== 0 && strlen(password)>=8 )
        printf("success! welcome,%s\n",username);
    else
        printf("invalid password.\n");
    return 0;
}
