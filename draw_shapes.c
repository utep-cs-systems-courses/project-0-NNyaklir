#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Prints an arrow of the specified size
void print_arrow(int leftCol, int size)
//This should make the begining of a triangle but at half the size for of the one above
{
  int half = size/2;
  int maxCol=10;
  int arrCount=1;
  int whiteSpace=5;
  for(int row=0; row<size;)
  {
    for (int i=0; i<=whiteSpace;i++) putchar(' ');
    for (int i=0; i<arrCount;i++) putchar('*');
    for (int i=0; i<=whiteSpace; i++) putchar(' ');
    arrCount = arrCount+2;
    whiteSpace = whiteSpace-2;
    putchar ('\n');
    row++;
  }
}

