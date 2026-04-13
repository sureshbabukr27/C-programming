#include<stdio.h>
void inputarray(int *arr,int n);
void displayarray(int *arr,int n);
int sumarray(int *arr,int n);
int countpositive(int *arr,int n);
int countnegative(int *arr,int n);

int main()
{
int arr[100];
int n,sum,pos_c,neg_c;
printf("enter the number of elements in the array:");
scanf("%d",&n);
inputarray(arr,n);
printf("\narray elements are:");
displayarray(arr,n);
sum=sumarray(arr,n);
printf("\nsum of all elements=%d",sum);
pos_c=countpositive(arr,n);
neg_c=countnegative(arr,n);
printf("\nnumber of positive elements=%d",pos_c);
printf("\nnumber of negative elements=%d\n",neg_c);
return 0;
}
void inputarray(int *arr,int n)
{
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
}
void displayarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*(arr+i));
    }
}
int sumarray(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    return sum;
}
int countpositive(int *arr,int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
      if(*(arr+i)>0)
        count++;
  }
  return count;
}
int countnegative(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)<0)
            count++;
    }
    return count;
}
