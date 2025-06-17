// src/dp_demo.c
#include <stdio.h>
#include <stdlib.h>
#include "modules.h"

int rec_calls;

// naive recursive Fibonacci
int fib_rec(int n) {
    rec_calls++;
    if (n <= 1) return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

// DP (memoized) Fibonacci
int fib_dp(int n, int memo[]) {
    if (memo[n] != -1) return memo[n];
    memo[n] = fib_dp(n-1, memo) + fib_dp(n-2, memo);
    return memo[n];
}

void run_dp_demo(void) {
    int n;
    printf("\n--- DP Demo: Fibonacci ---\n");
    printf("Compute Fibonacci of n for both recursive and DP methods.\n");
    printf("Enter n (>=0 and <=40 recommended): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return;
    }

    // recursive
    rec_calls = 0;
    int result_rec = fib_rec(n);
    printf("Recursive result: %d (function calls: %d)\n",
           result_rec, rec_calls);

    // DP
    int *memo = malloc((n+1) * sizeof(int));
    if (!memo) {
        printf("Memory error.\n");
        return;
    }
    for (int i = 0; i <= n; i++) memo[i] = -1;
    memo[0] = 0; memo[1] = 1;
    int result_dp = fib_dp(n, memo);
    printf("DP result:       %d\n", result_dp);

    free(memo);
}
