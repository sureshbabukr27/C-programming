#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data2.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened!\n");
        return 1;
    }
    fprintf(fp,"welcome to file handling in c\n");
    fprintf(fp,"this text is written to the file.\n");
    fclose(fp);
    return 0;
}
