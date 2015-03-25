#include <stdio.h>

int arr[] = {2,56,3,45,7};
int *ptr;

int main(){
  
  int i;
  ptr = &arr[0];
  
  printf("Using pointer + i\n\n");
  for(i=0; i<5; i++){
    printf("Array: array[%d] - %d\n",i,arr[i]);
    printf("Poiner at: %d - %d\n",i, *(ptr+i));
  }

  printf("Using pointer++\n\n");
  for(i=0; i<5; i++){
    printf("ptr + %d = %d\n",i,*ptr++);
  }

  printf("Using ++pointer\n\n");
  for(i=0; i<5; i++){
    printf("ptr + %d = %d\n",i,*(++ptr)); 
  }
  return 1;
}
