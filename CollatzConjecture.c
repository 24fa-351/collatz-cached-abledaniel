#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
 
int collatz(int num){
    int steps = 0;
    while (num != 1) {
        steps++;
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = 3 * num + 1;
        }
    }
    return steps;
}

int main(int argc, char *argv[]){
    double totaltime = 0.0;
    int n = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);
    srand(time(NULL));
    for (int i = 0; i < n; i++){
            int rn = min + rand() %(max-min +1);
            clock_t start = clock();
            int steps = collatz(rn);
            clock_t end = clock();
            double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
            totaltime += elapsed_time;
            printf("%llu,%d\n", rn, steps);
    }
    double meantime = totaltime/n;
    printf("%f\n", meantime);

}