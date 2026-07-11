#include <stdio.h>

void ReadIntArray(int nums[], int len);
void PrintArray(int nums[], int len);
int FindMaximumValue(int num[], int len);
int FindMinimumValue(int num[], int len);

int main(void)
{
    int length = 6;
    int numbers[length];

    ReadIntArray(numbers, length);
    PrintArray(numbers, length);
    FindMaximumValue(numbers, length);
    FindMinimumValue(numbers, length);

    return 0;
}

void ReadIntArray(int nums[], int len)
{
    for (int i = 0; i < len; i++)
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
    int maxCount = 1;
    int maxVal = num[0];
    for(int i = 1; i < len; i++)
    {
        if (num[i] > maxVal)
        {
            maxVal = num[i];
            maxCount = 1; //resetting count
        }
        else if (num[i] == maxVal) maxCount++; //adds +1 to count
    }

    printf("\nMaximum value is: %d", maxVal);
    printf("\nMaximum value occurred %d times", maxCount);
    printf("\nMaximum value positions: ");

    for (int i = 0; i < len; i++)
    {
        if (num[i] == maxVal) printf("%d ", i + 1); //prints positions
    }
    return maxVal;
}

int FindMinimumValue(int num[], int len)
{
    int minVal = num[0];
    int minCount = 1;
    for(int i = 1; i < len; i++)
    {
        if (num[i] < minVal)
        {
            minVal = num[i];
            minCount = 1; //resetting count
        }
        else if (num[i] == minVal) minCount++; //adds +1 to count
    }
    printf("\n\nMinimum value is: %d", minVal);
    printf("\nMinimum value occurred %d times", minCount);
    printf("\nMinimum value positions: ");
    for (int i = 0; i < len; i++)
    {
        if (num[i] == minVal) printf("%d ", i + 1); //prints positions
    }
    return minVal;
}


