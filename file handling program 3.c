 #include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("data.txt","a");
    if(fp==NULL){
        printf("file cannnot be opened!\n");
        return 1;
    }

    fprintf(fp,"this line is appended at the end.\n");
    fclose(fp);
    printf("data appended sucessfully.\n");
    return 0;

}
