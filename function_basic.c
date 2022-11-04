#include "function_basic.h"   


// Driver Code
int division(int a, int b)
{
    // Division by Zero
    int x = a / b;
    //error runtime if b = 0

    return x;
}

int add(int x, int y)
{
    int answer = x + y;
  
    // error if X and Y are large
    // numbers
 
  // X < 10^9
    return answer;
}

int sum_element_array(int array[]) 
{
    int sum = 0;
    int length = sizeof array/ sizeof(int);
    for (int i = 0; i <= length; i++) {
        sum += array[i];
    }
    //error if i = length
    return sum;
}