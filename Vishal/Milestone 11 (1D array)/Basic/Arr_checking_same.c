#include<stdio.h>

int main()
{
    int a[20],max,min;
    printf("Enter any six no. : ");
    for(int i=0; i<6; i++)
        scanf("%d",&a[i]);
    int j=0,read=1;
    for(int i=0; i<6; i++)
    {
        if(a[5-i]!=a[j])
        {
            read = 0;
            break;
        }
        else
            j++;
    }
    if(read==1)
        printf("Given matrix is same reading from starting or ending");
    else
        printf("Given matrix is not same reading from starting or ending");
    return 0;

}