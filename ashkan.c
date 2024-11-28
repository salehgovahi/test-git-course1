#include <stdio.h>

int main() {
  int n;
  int i;
  int j;
  int k;
  float sum;
  float avg;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  
  float arrA[n];
  for (i = 0; i < n; i++)
  {
    j = i + 1;
    printf("Enter score for student ");
    printf("%d", j);
    printf(":");
    scanf("%f", &arrA[i]);
  }
  for(k = 0; k < n; k++)
  {
    sum = sum + arrA[k];
  }
  avg = sum / n;
  printf("%.2f", avg);
}