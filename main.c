/*
AUTHOR: Joshua Wade West
HW #: HW2 Problem 3
SPECIFICATION:a program that finds how many values added in an array equal a specified number
FOR: CS 2413 Lab- Section 502
*/
#include <stdio.h>

int main(void) {
  int Array[5] = {3,2,5,7,5};//decleration of an array with the values 3,2,5,7,8
  int k = 10;//decleration of the desired sum, k
  int i,j;
  int Solutions = 0;//decleration of the variable for number of solutions

for (i = 0; i < 5; i++){//loops for the length of the array       
printf("\nArray[%d] = %d\n", i, Array[i]);//outputs the array
}

printf("\nThe Value of K is %d", k);//shows the value fo K


for(i=0;i < 4; i++){//loops for a primary num

  for(j=i+1;j<5;j++){//loops for a secondary number



 if(Array[i]+Array[j] == k){//as the 2 loops loop they add each current number, if the sum = k then
   
   printf("\n\n%d + %d = %d",Array[i], Array[j], k );//output of adding numbers
   Solutions++;//solutions increase
   }

  }
}

printf("\n\nSo, number of the pair of elements with sum K is %d", Solutions);//outputs the number of working ints that equal K

  return 0;
}