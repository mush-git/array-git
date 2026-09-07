#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int A[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
        }
    printf("Major diagonal: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d", &A[i][j]);
            }
        }
        printf("I am checking if my code is changed or not");
    }
    // printf("\nMinor diagonal: ");
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             printf("%d", &A[i][j]);
    //         }
    //     }
    // }
    return 0;
}

//[[basic syntax of 2D Array]]

// int row = 2, col = 3;

// int A[2][3] = {{1, 2, 3}, {4, 5, 6}};

// for (row = 0; row < 2; row++)
// {

//     for (col = 0; col < 3; col++)
//     {
//         printf("%d",A[row][col]);
//     }
//     printf("\n");
// }

// [2d array practice sheet question 2]
//    int i, j, n, m;

//     scanf("%d%d", &m,& n);
//     int A[m][n];

//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Row-wise: ");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d ", A[i][j]);
//         }
//     }

//     printf("\ncolumn-wise: ");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             printf("%d ", A[j][i]);
//         }
//     }
