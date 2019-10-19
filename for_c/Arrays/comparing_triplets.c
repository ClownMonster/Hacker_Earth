// This is just the demo algorithm you need to enter in the given block

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {

int  Alice_point = 0,  Bob_point = 0;
   for(int i = 0; i<a_count; i++)
   {
       if(a[i]==b[i]) // equality check
       {
          
       }

       if(a[i]>b[i]) // Greater Alice point
       {
           Alice_point += 1;
          
       }
        if(a[i]<b[i]) // Greater Bobs point
       {
           Bob_point += 1;
           
       }

   }
    
    *result_count = 2;  // alocating to the pointer since the value can be used outside its scope
   
    static int c[2];
    // since you need to retain the value of the variable after they are gone out of scope 
    // you can make staic or dynamically declare using malloc/calloc

    
     c[0]  = Alice_point;
     c[1] = Bob_point;
    return c;
    
}
