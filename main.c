#include <stdio.h>

void ReadIntArray(int nums[], int len);
void PrintArray(int nums[], int len);
int FindMaximumValue(int num[], int len);
int FindMinimumValue(int num[], int len);

int main(void)
{

    int lenght = 6;
    int numbers[lenght];

    ReadIntArray(numbers, lenght);
    PrintArray(numbers, lenght);
    int MaxVal = FindMaximumValue(numbers, lenght);
    int MinVal = FindMinimumValue(numbers, lenght);
    printf("\nMaximum value is: %d\n", MaxVal);
    printf("Minimum value is: %d\n", MinVal);
    return 0;
}

void ReadIntArray(int nums[], int len)
{
    for (int i = 1; i < len; i++)
    {
        printf("Enter %d / %d: ", i + 1 , len);
        scanf("%d", &nums[i]);
    }
}

void PrintArray(int nums[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]);
    }
}

int FindMaximumValue(int num[], int len)
{
    int maxVal = num[0];
    for(int i = 1; i < len; i++)
    {
        if (num[i] > maxVal)
        {
           maxVal = num[i];
        }
    }
    return maxVal;
}

int FindMinimumValue(int num[], int len)
{
    int minVal = num[0];
    for(int i = 0; i < len; i++)
    {
        if (num[i] < minVal)
        {
            minVal = num[i];
        }
    }
    return minVal;
}
