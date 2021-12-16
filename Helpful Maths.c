#include<stdio.h>
#include<string.h>

void selection_sort(char arr[], int n);


int main(void)
{
    char arr[100];
    scanf("%s", arr);

    selection_sort(arr, strlen(arr));

    printf("%s", arr);
}


void selection_sort(char arr[], int n)
{
    // go through the numbers and sort them by thier ASCII code

    for (int i = 0; i < n - 1; i+=2)
    {
        int min_index = i;

	for (int j = i + 2; j < n; j+=2)
	{
	    if (arr[j] < arr[min_index]) { min_index = j; }
	}

        // swap numbers

        int temp = arr[i];
	arr[i] = arr[min_index];
	arr[min_index] = temp;
    }
}

