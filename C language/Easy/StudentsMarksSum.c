#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int i=0,sum=0;
  if(gender == 'b' || gender == 'B')
  {
      while(i < number_of_students)
      {
          if(i%2==0)          
          sum+=marks[i];
          
          i++;
      }      
  }
  if(gender == 'g' || gender == 'G')
  {
      while(i < number_of_students)
      {
          if(i%2!=0)          
          sum+=marks[i];
          
          i++;
      }      
  }
  return sum;
}

int main() {