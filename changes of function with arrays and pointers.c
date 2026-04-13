 #include<stdio.h>
void inputarray(int *arr,int n);
void displayarray(const int *arr,int n);
int sumarray(const int *arr,int n);
int countpositive(const int *arr,int n);
int countnegative(const int *arr,int n);

int main()
{
int arr[100];
int n,sum,poscount,negcount;
printf("enter the number of elements in the array (max 100):");
if (scanf("%d",&n)!=1||n<0||n>100)
{
    puts("invalid size.");
    return 1;
}
inputarray(arr,n);
printf("\narray elements are:");
displayarray(arr,n);
sum=sumarray(arr,n);
printf("\nsum of all elements =%d",sum);
poscount=countpositive(arr,n);
negcount=countnegative(arr,n);
printf("\nnumber of positive elements =%d",poscount);
printf("\nnumber of negative elements =%d\n",negcount);
return 0;
}

void inputarray(int *arr,int n)
{
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
}

void displayarray(const int *arr,int n)
{
    for(int i=0;i<n;i++)
        printf("%d",*(arr+i));
}
int sumArray(int *arr,int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
   sum += *(arr+i);
}
return sum;
}
int countpositive(const int *arr,int n)
{

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)>0)cnt++;
}
return cnt;
}
int countnegative(const int *arr,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {

        if(*(arr+i)<0)cnt++;
    }
        return cnt;
}
