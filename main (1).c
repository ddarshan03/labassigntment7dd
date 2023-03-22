#include <stdio.h>
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
void bubbleSort(int arr[], int n)
{
  int swap = 0;
  
  int i, j,temp;
  for (i = 0; i < n-1; i++)
    {
      swap = 0;
      for (j = 0; j < n-i-1; j++)
        {
          if (arr[j] > arr[j+1])
            {//then swap
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swap++;
            }
        }
      printf("pass #%d:%d\n",i+1, swap);
    }
}

int main(void) {
  int arr[]={97, 16, 45, 63, 13, 22, 7, 78, 72};
  bubbleSort(arr,9);
  for(int i = 0; i<9; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}