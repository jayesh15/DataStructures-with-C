#include <stdio.h>
int main()
    {
        int a[50],n,key,result,i;
        void bubble_sort_ascend(int a[],int n);
        int binary_search(int a[],int key, int n);
        printf("Enter the no. of elements : ");
        scanf("%d",&n);
        printf("Enter the %d elements of the array :\n",n);
        for(i=0;i<n;i++)
            {
                 printf("%d)",i+1);
                 scanf("%d",&a[i]);
            }
        printf("Enter the key element to be searched : ");
        scanf("%d",&key);
        bubble_sort_ascend(a,n);
        printf("The sorted array is :\n");
        for(i=0;i<n;i++)
            {
             printf("%d ",a[i]);
            }
        printf("\n");
        result=binary_search(a,key,n);
        if(result==-1)
            printf("\nElement %d not found in the list",key);
        else
            printf("\nElement %d found at location %d",key,result+1);
        return 0;
    }

void bubble_sort_ascend(int a[],int n){
     int i,j,temp;
     for(i=1;i<n;i++)
         {
             for(j=0;j<n-i;j++)
                {
                 if(a[j]>a[j+1])
                     {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                     }
                }
     }
}

int binary_search(int a[],int key, int n)
{
    int i,j,c;
    i=0;
    j=n-1;
    c=(i+j)/2;
    while(a[c]!=key && i<=j)
        {
             if(key>a[c])
                i=c+1;
             else
                j=c-1;
             c=(i+j)/2;
        }
     if(i<=j)
        return c;
     else
        return(-1);
}