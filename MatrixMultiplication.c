//  Created by Nick Salerni.
//  Copyright (c) 2014 Nick Salerni. All rights reserved.

#include <stdio.h>

/*
 Multiplies an m * n matrix with a p * q matrix. Resulting in an m * q matrix.
 
 Asks for the number of rows and columns in the first matrix, then the second.
 This will determine if the multiplication is possible.
 
 If it is, the program will then prompt the user for the elements of each matrices and give a result.
 
 If not, meaning that n (the number of columns in the first matrix)
 and p (the number of rows in the second matrix) are not equal,
 then the program will give the user an error and terminate.
 */
void matrixMultiply()
{
	int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];
    
    // Prompts user to enter order of first matrix.
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    
    // Prompts user to enter order of second matrix.
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    
    // Checks if the two matrices can be multiplied.
    if (n != p)
    {
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    }
    
    // If the matrices can be multiplied.
    else
    {
        // Prompts the user to enter the elements of the first matrix.
        printf("Enter the elements of first matrix\n");
        
        for (c = 0 ; c < m ; c++)
        {
            for ( d = 0 ; d < n ; d++ )
            {
                // Stores the values of the first matrix in array, first.
                scanf("%d", &first[c][d]);
            }
            
        }
        
        // Prompts the user to enter the elements of the first matrix.
	    printf("Enter the elements of second matrix\n");
        
	    for (c = 0 ; c < p ; c++)
	    {
			for (d = 0 ; d < q ; d++)
			{
                // Stores the values of the first matrix in array, first.
				scanf("%d", &second[c][d]);
			}
	    }
        
        // Computes the product of the two given matrices.
	    for (c = 0 ; c < m ; c++)
	    {
            for (d = 0 ; d < q ; d++)
            {
                for (k = 0 ; k < p ; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }
                multiply[c][d] = sum;
                sum = 0;
            }
	    }
        
        // Displays the product of the two matrices.
	    printf("Product of entered matrices:-\n");
        
	    for (c = 0 ; c < m ; c++)
	    {
            for (d = 0 ; d < q ; d++)
            {
                printf("%d\t", multiply[c][d]);
            }
            printf("\n");
	    }
    }
}

// Main function.
int main()
{
    // Calls the multiplyMatrix function.
	matrixMultiply();
    return 0;
}