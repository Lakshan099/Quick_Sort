#include <stdio.h>
void QuickSort(int A[],int p,int r);
int Partition(int A[], int p, int r);

void main() {

    int A[10],i;
    //printf("Enter Values");
    for(i=0; i<10; i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&A[i]);
    }
    QuickSort(A,0,9);
    printf("\nSorted Array\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",A[i]);
    }

   
}

void QuickSort(int A[], int p, int r)
{
    if(p<r)
    {
        int q=Partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}

int Partition(int A[], int p, int r)
{
    int x,i,j,temp;
    x=A[r];
    i=p-1;
    for(j=p; j<=r-1; j++)
    {
        if(A[j]<=x)
        {
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }

    temp = A[i+1];
    A[i+1] = A[r];
    A[r]=temp;
    return i+1;

}