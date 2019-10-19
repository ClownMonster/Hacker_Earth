// This is just the demo algorithm you need to enter in the given block

int birthdayCakeCandles(int ar_count, int* ar) {
    int  max = ar[0], count = 0;
    for(int i=0;i<ar_count;i++) // travering through the array and finding the maximum value in the array
    {
        if(ar[i] > max)
            {
                max  = ar[i];
            }
    }


    for(int i=0;i<ar_count;i++) // checking how many elemnts are equal to maximum value and adding it to the count
    {
        if(ar[i] == max)
        count++;
    }

    return count;
}