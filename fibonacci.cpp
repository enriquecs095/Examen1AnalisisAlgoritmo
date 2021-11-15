#include "fibonacci.h"

fibonacci::fibonacci(){}


int fibonacci::fibonacciGenerate(int number){
      if (number == 1 || number == 2)
         return 1;
      else
         return fibonacciGenerate(number - 1) + fibonacciGenerate(number - 2);
}