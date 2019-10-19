// This is just the demo algorithm you need to enter in the given block

void staircase(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++) // algorithm to print number of empty spaces
        {
            printf(" ");
        }

        for(int k = i; k >= 0; k--) // algorithm to print number of '#' 
        {
            printf("#");
        }

        printf("\n");
    }

}