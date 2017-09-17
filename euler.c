#include <stdio.h>
#include <stdlib.h>

//Problem 1:Find the sum of all the multiples of 3 or 5 below 1000.

int euler1(){
  int i = 0;
  int ans = 0;
  while( i < 1000 ) {
    if( i % 3 == 0 || i % 5 == 0 ){
      ans += i;
    }
    i += 1;
  }
  return ans;
}

//Problem 6:Find the difference between the sun of the squares of the first one hundred anatural numbers and the square of the sum.

int euler6(){
  int i = 0;
  int square_of_sum = 0;
  int sum_of_square = 0;
  for( i; i <= 100; i += 1){
    square_of_sum += i;
    sum_of_square += i * i;
  }
  return (square_of_sum * square_of_sum) - sum_of_square;
  
  
}

int main(){
  printf("%d\n", euler1());
  printf("%d\n", euler6());
}
