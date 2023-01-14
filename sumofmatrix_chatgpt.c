#include <stdio.h>

int MAX_ROWS; 
int MAX_COLS;

void input_matrix(int arr[][MAX_COLS], int rows, int cols) {
  // Function to input a matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter element [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
}

void add_matrices(int arr1[][MAX_COLS], int arr2[][MAX_COLS], int sum[][MAX_COLS], int rows, int cols) {
  // Function to add two matrices
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
}

void print_matrix(int arr[][MAX_COLS], int rows, int cols) {
  // Function to print a matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  printf("Enter the number of rows : ");
  scanf("%d",&MAX_ROWS);
  printf("Enter the number of rows : ");
  scanf("%d",&MAX_COLS);
  int arr1[MAX_ROWS][MAX_COLS];
  int arr2[MAX_ROWS][MAX_COLS];
  int sum[MAX_ROWS][MAX_COLS];
  

  printf("Enter matrix 1:\n");
  input_matrix(arr1, MAX_ROWS, MAX_COLS);

  printf("Enter matrix 2:\n");
  input_matrix(arr2, MAX_ROWS, MAX_COLS);

  add_matrices(arr1, arr2, sum, MAX_ROWS, MAX_COLS);

  printf("Sum of the matrices:\n");
  print_matrix(sum, MAX_ROWS, MAX_COLS);

  return 0;
}
