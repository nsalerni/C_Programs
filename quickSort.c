//  Author: Nick Salerni
//  Copyright (c) 2014. All rights reserved.
//
//  Quick Sort Algorithm
//

// Partitions the array into two parts.
void Partition (int A[], int *i, int *j)
{
    int pivot, temp, pivpos;
    
    pivpos = (*i + *j) / 2;
    pivot = A[pivpos];  // Choose middle key as pivot.
    
    do
    {
        // Find the leftmost i such that A[i] >= pivot.
        while ( A[*i] < pivot )
        {
            (*i)++;
        }
        
        // Find the leftmost j such that A[j] <= pivot.
        while ( A[*j] > pivot )
        {
            (*j)--;
        }
        
        // If i and j did not cross over one another, swap.
        if (*i <= *j)
        {
            temp = A[*i];
            A[*i] = A[*j]; // Swap i, j
            A[*j] = temp;
            (*i)++;
            (*j)--;
        }
    } while (*i <= *j); // While pointer to i and j have not crossed.
}

// Sort array A from m to n into ascending order.
void QuickSort (int A[], int m, int n)
{
    int i, j;
    
    if (m < n)
    {
        // Initially i and j point to the first and last items.
        i = m;
        j = n;
        
        Partition (A, &i, &j); // Partition A[m:n] into A[m:j] and A[i:n].
        QuickSort(A, m, j);
        QuickSort(A, i, n);
    }
}

