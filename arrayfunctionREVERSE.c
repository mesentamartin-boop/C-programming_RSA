#include <stdio.h>
#include <conio.h>

void display(int arr[], int size)
{
    int i;
    for(i = size - 1; i >= 0; i--)
    {
        printf("The array number is: %d\n", arr[i]);
    }
}

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    display(numbers, size);

    return 0;
}

