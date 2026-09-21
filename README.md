# C-Day-53-Smallest-Number
# C Day 53 - Smallest Number

This program takes multiple numbers from the user and finds the smallest number among them.

## Example

Input:

```text
Enter how many numbers: 5
Enter number 1: 25
Enter number 2: 10
Enter number 3: 45
Enter number 4: 30
Enter number 5: 15
```

Output:

```text
Smallest number = 10
```

## Concepts Used

* `for` loop
* `if` condition
* Comparison operator `<`
* User input
* Variables
* Finding the smallest number

## How It Works

1. Ask the user how many numbers they want to enter.
2. Store the first number in the `smallest` variable.
3. Use a `for` loop to take the remaining numbers.
4. Compare each number with `smallest`.
5. If the new number is smaller, update `smallest`.
6. Print the smallest number at the end.

## C Code

```c
#include <stdio.h>

int main()
{
    int n, number;
    int smallest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &smallest);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number < smallest)
        {
            smallest = number;
        }
    }

    printf("Smallest number = %d", smallest);

    return 0;
}
```

## Output

```text
Enter how many numbers: 5
Enter number 1: 25
Enter number 2: 10
Enter number 3: 45
Enter number 4: 30
Enter number 5: 15
Smallest number = 10
```

## Goal

The goal of this project is to practice `for` loops, user input, comparisons, and finding the smallest value in C.
