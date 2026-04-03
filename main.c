#include <stdio.h>
#include <stdlib.h>

// Function to merge two arrays A and B into array C
void mergeArrays(int A[],int B[],int C[],int N,int K)
{
   int i,counter=0;

   // Copy elements of A into C
   for(i=0;i<N;i++)
   {
     C[counter]=A[i];
     counter++;
   }

   // Copy elements of B into C
    for(i=0;i<K;i++)
   {
     C[counter]=B[i];
     counter++;
   }
}

int main()
{
    int N,K,i;
    int A[100],B[100],C[200];

    // Get size of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d",&N);

    if(N<=0 || N>100)
    {
        printf("Invalid value");
        return 0;
    }

    // Fill first array
    for(i=0;i<N;i++)
    {
        printf("%d. element:",i+1);
        scanf("%d",&A[i]);
    }

    // Get size of second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d",&K);

    if(K<=0 || K>100)
    {
        printf("Invalid value");
        return 0;
    }

    // Fill second array
     for(i=0;i<K;i++)
    {
        printf("%d. element:",i+1);
        scanf("%d",&B[i]);
    }
    // Merge arrays
    mergeArrays(A,B,C,N,K);

    // Print merged array
    printf("\nMerged array: ");
    for(i=0;i<N+K;i++)
    {
        printf("%4d",C[i]);
    }

    return 0;
}
