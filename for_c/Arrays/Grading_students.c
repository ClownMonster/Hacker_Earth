// this is the demo algorithm that has to to be dropped in the blank space


int* gradingStudents(int grades_count, int* grades, int* result_count) {
    
   static int my_grades[10];  // static allocation of the array so the values cna be used even atfer the variables go out of scope
    for(int i = 0;  i< grades_count ; i++)
    {
        if(grades[i] < 38) my_grades[i] = grades[i]; // condition for the marks less than 38 and assigning the same grade
        else if((grades[i] % 5)==0) my_grades[i] = grades[i]; // conndition for other than 38.. cheking whether the grade is divisible by 5
        else
         {
             int num = grades[i];
             int num2 = grades[i];
             while((num % 5) !=0)
             {
                num = num +1;
             } 
             
        
             if((num-num2) < 3) my_grades[i] = num;
             else my_grades[i] = num2;

        }
    }
    

    *result_count = grades_count;
    return my_grades;
}
