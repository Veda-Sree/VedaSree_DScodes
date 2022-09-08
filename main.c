#include <stdio.h>
int Binary_Search(int array[], int start_index, int end_index, int element) {
  while (start_index <= end_index) {
    int middle = start_index + (end_index - start_index) / 2;
    if (array[middle] == element)
      return middle;
    if (array[middle] < element)
      start_index = middle + 1;
    else
      end_index = middle - 1;
  }
  return -1;
}
int main(void) {
  int array[] = {1, 4, 7, 9, 16};
  int n = 5;
  int element = "%d";
  scanf("%d", &element);
  int needed_index = Binary_Search(array, 0, n - 1, element);
  if (needed_index == -1) {
    printf("Element not found.");
  } else {
    printf("Element found at index : %d", needed_index);
  }
  return 0;
}