 #include <stdio.h>

int main()
{
  int array[] = {10, 45, 26, 74, 56, 94, 25, 15};
  int length = sizeof(array) / sizeof(array[0]);
  int largest = array[0]; 
  for (int i = 1; i < length; i++)
  {
    if (array[i] > largest)
    {
      largest = array[i];
    }
  }
  printf("The largest element in the array is %d\n", largest);
  return 0;
}
