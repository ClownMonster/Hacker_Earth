// This is just the demo algorithm you need to enter in the given block

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {

    int left_diagonal_sum = 0, right_diagonal_sum = 0; // left diagonal is principal diagonal and right is secondary diagonal 

    for(int i = 0; i< arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++)
        {
            if(i == j) // check for principal diagonal elements
            {
                left_diagonal_sum += arr[i][j];
            }

            if((i+j) == (arr_columns-1)) // algorithm to check for secondary diagonal elements
            {
                right_diagonal_sum += arr[i][j];
            }
        }
    }

    return abs(left_diagonal_sum - right_diagonal_sum); // returning the absolute value of integer difference

}
