#include<stdio.h>
 int main()
 {
     int arr[6]={5,12,18,25,32,40};
     int low=0,high=5,mid,key,i,found=0;
     printf("enter elements to search:");
     scanf("%d",&key);
     while(low<=high)
     {
         mid=(low+high)/2;
         if(arr[mid]==key)
         {
             printf("element %d found at position %d\n",key,mid+1);
             return 0;
         }
     else if(key<arr[mid])
        high=mid-1;
     else
        low=mid+1;
     }
     printf("element %d is unsorted\n",key);
       for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found)
        printf("element %d found at position %d\n",key,i+1);
    else
        printf("element %d not found\n",key);
     return 0;
 }
