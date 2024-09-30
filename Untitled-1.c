// Collatz Conjecture 

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(){
    // int n = rand() %INT_MAX;
    uint64_t n = 42;
    printf("Enter a number: ");
    int steps = 0;
    printf("Collatz Conjecture for %llu is: ", n);
    while(n != 1){
        steps++;
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
    }
    printf("1\n");
    printf("Number of steps: %d\n", steps);
    return 0;
}