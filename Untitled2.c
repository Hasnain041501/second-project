
// C Program to print the Fibonacci series using recursion
#include <stdio.h>

// first two values
int prev1 = 1;
int prev2 = 0;

// recursive function to print the fibonacci series
void fib(int n)
{
	if (n < 3) {
		return;
	}
	int fn = prev1 + prev2;
	prev2 = prev1;
	prev1 = fn;
	printf("%d ", fn);
	return fib(n - 1);
}

// function that handles the first two terms and calls the
// recursive function
void printFib(int n)
{
	// when the number of terms is less than 1
	if (n < 1) {
		printf("Invalid number of terms\n");
	}
	// when the number of terms is 1
	else if (n == 1) {
		printf("%d ", 0);
	}
	// when the number of terms is 2
	else if (n == 2) {
		printf("%d %d", 0, 1);
	}
	// number of terms greater than 2
	else {
		printf("%d %d ", 0, 1);
		fib(n);
	}
	return;
}

// driver code
int main()
{
	int n = 9;
	printFib(n);
	return 0;
}

#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}

#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

