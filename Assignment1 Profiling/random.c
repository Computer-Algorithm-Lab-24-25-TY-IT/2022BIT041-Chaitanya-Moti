#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int generateRandomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

bool isEven(int num) {
    return num % 2 == 0;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

unsigned long long factorial(int num) {
    if (num < 0) return 0;  // Factorial of negative numbers is undefined
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int prefixSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += arr[i];
    }
    return sum;
}

double average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

void analyzeNumber(int num, int arr[], int n) {
    printf("Number: %d\n", num);
    printf("Odd/Even: %s\n", isEven(num) ? "Even" : "Odd");
    printf("Prime: %s\n", isPrime(num) ? "Yes" : "No");
    printf("Factorial: %llu\n", factorial(num));
   
    printf("\n");
}

void printArray(int arr[]){
    printf("Generated Array:\n[");
    for (int i = 0; i < 100; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n\n");
  }

int main() {
    srand(time(0));
    
    int randomNumbers[100];
    for (int i = 0; i < 100; i++) {
        randomNumbers[i] = generateRandomNumber(1, 10000);
    }
    
     // Display the generated array
    printArray(randomNumbers);
    
    for (int i = 0; i < 100; i++) {
        analyzeNumber(randomNumbers[i], randomNumbers, i);
    }
    
     printf("Prefix Sum: %d\n", prefixSum(randomNumbers, 100));
    printf("Average: %.2f\n", average(randomNumbers, 100));
    
    return 0;
}

