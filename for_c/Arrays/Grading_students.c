// this is the demo algorithm that has to to be dropped in the blank space


int* gradingStudents(int grades_count, int* grades, int* result_count) {
    
   static int my_grades[10];  // static allocation of the array so the values cna be used even atfer the variables go out of scope
    for(int i = 0;  i< grades_count ; i++)
    {
        if(grades[i] < 38) my_grades[i] = grades[i]; // condition for the marks less than 38 and assigning the same grade
        else if((grades[i] % 5)==0) my_grades[i] = grades[i]; // conndition ffor other than 38.. cheking whether the grade is divisible by 5
        else
         {
             int num = grades[i]; // assigning the initial grade of the variable and the value of this is going to change during condition checking below
             int num2 = grades[i]; // initail value of the grade that doesnt change
             while((num % 5) !=0) // iteration to check the next multiple of 5
             {
                num = num +1;
             } 
             
        
             if((num-num2) < 3) my_grades[i] = num; //  checking the diiference b/w initial to next multiple of the 5
             else my_grades[i] = num2;  // if differnce not less than 3 the value of the grade will not be modified

        }
    }
    

    *result_count = grades_count;  // assigning the no of grades to the resulot_count so that it can be used to print the output
    return my_grades; // returning the statically allocated array to the calling function eith its values
} 
