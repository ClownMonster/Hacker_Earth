// This is just the demo algorithm you need to enter in the given block

void miniMaxSum(int arr_count, int* arr) {
    int min = arr[0] ,  max;
     int j;
    for(int i=0; i < arr_count-1;i++) // sorting the array in accending order
    {  
      for(int  j=0; j< arr_count-i-1; j++)
      {
          if(arr[j] > arr[j+1])
          {
              min = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = min;
          }
         
      }
       
    }
   


    long int minimal_sum = 0, max_sum = 0;
    for(int i = 0; i< arr_count-1;i++ ) // sum of first four .. except the last one
    {
        minimal_sum += arr[i];
    }

    for(int j = 1; j< arr_count;j++ ) // sum of last four ... except first one
    {
         max_sum += arr[j];
    }

    printf("%ld %ld",minimal_sum,max_sum);


}
