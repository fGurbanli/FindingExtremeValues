/**
* File:        5_minmax_template.c
 * Author:      Risto Heinsar
 * Created:     29.09.2023
 * Last edit:   29.09.2023
 *
 * Description: Starter code for arrays lab task. Allows the user to enter
 *              an array of integers, finds the min and max values in part 1.
 *              Finds the positions of the extreme values and the number of
 *              times they occur in the array in part 2.
 */
#include <stdio.h>

void ReadIntArray(int nums[], int len);
void PrintArray();
int FindMaximumValue(int num[], int len);
int FindMinimumValue(int num[], int len);

int main(void)
{
    int numbers, lenght;
    lenght = 6;

    ReadIntArray(&numbers, lenght);

    return 0;
}

/**
 * Description:  Reads values from the user and stores them into the
 *               integer array provided
 *
 * Parameters:   nums - location to store values at
 *               len - length of the array
 *
 * Return:       -
 */
void ReadIntArray(int nums[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Enter %d / %d: ", i + 1 , len);
        scanf("%d", &nums[i]);
    }
}


/**
 * Description:  Prints all integers from the array on the same line, space
 *               separated.
 *
 * Parameters:   nums - values that are printed
 *               len - length of the array
 *
 * Return:       -
 */
void PrintArray()
{

}


/**
 * Description:  Find the maximum value from the nums array and returns it
 *
 * Parameters:   nums - values from which the max is searched in
 *               len - length of the array
 *
 * Return:       Maximum value in the nums array
 */

int FindMaximumValue(int num[], int len)
{
    int maxVal = num[0];
    for(int i = 0; i < len; i++)
    {
        if (num[i] > num [maxVal])
        {
           maxVal = num[i];
        }
    }
    return maxVal;
}

/**
 * Description:  Find the minimum value from the nums array and returns it
 *
 * Parameters:   nums - values from which the min is searched in
 *               len - length of the array
 *
 * Return:       Minimum value in the array
 */

