#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int i, count0 = 0, count1 = 0, count2 = 0;

    // Traverse the complete array
    for (i = 0; i < n; i++) 
    {
        // If the element is 0
        if (arr[i] == 0)
            count0++;

        // If the element is 1
        else if (arr[i] == 1)
            count1++;

        // If the element is 2
        else
            count2++;
    }

    // Updating the array
    i = 0;

    // Store all the 0s
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }

    // Store all the 1s
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }

    // Store all the 2s
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }

  
}
