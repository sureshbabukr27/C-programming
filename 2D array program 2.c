#include<stdio.h>
int main()
{
    int m[2][3]={{1,2,3},{5,6,7}};
    for(int i=0;i<2;i++)
        {
        for(int j=0;j<3;j++)
        {
          for(int k=0;k<4;k++)

        {
            printf("%d",m[i][j]);

            if(j==2)
                printf("\n");
            else
                printf(" ");
        }
    }
        }
    return 0;


}
