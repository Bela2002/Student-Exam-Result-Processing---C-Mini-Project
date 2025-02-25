#include<stdio.h>
void main()
{   
    char a='%';
    int no_of_students,no_of_subjects,i,marks,n,total_of_student=0,pass_subjects=0,fail_subjects=0,pass_students=0,fail_students=0;
    float average_of_student,average_of_all=0,overall_average,best_average,pass_students_percentage,fail_students_percentage;
    
	printf("     ______STUDENTS MARKS ENTRY SYSTEM______");
	printf("\n\n\n\n__GUIDLINES__");
	printf("\n\n  *Number of students should be a positive value.");
	printf("\n  *Number of subjects should be a positive value.");
	printf("\n  *Marks of a subject should be between 0 and 100.");
	printf("\n  *Pass mark of a subject is 35.");
	printf("\n  *Pass average of a student is 30%c",a); 
	printf("\n\n\n\n__INITIAL DATA__");

    do
    {
      printf("\n\n  *How many students in the class: ");
	  scanf("%d",&no_of_students);
	  
	  if(no_of_students<=0)
	  {
	  	printf("\n\t\tERROR: Number of students should be a positive value.Try again! \n");
	  }    	
	}
	while(no_of_students<=0);
	
    do
    {
      printf("\n  *How many subjects in the exam: ");
	  scanf("%d",&no_of_subjects);
	  
	  if(no_of_subjects<=0)
	  {
	  	printf("\n\t\tERROR: Number of subjects should be a positive value.Try again! \n\n");
	  }    	
	}
	while(no_of_subjects<=0);
	
	for(i=1; i<=no_of_students; i++)
	{
	  printf("\n\n\n\n__DETAILS OF STUDENT NO %d__ \n\n",i);	
      
      for(n=1; n<=no_of_subjects; n++)
      {
        do
        {
          printf("\n  *Enter marks of subject %d: ",n);
	      scanf("%d",&marks);
	  
	      if(marks<0 || marks>100)
	      {
	  	    printf("\n\t\tERROR: Marks should be between 0 and 100.Try again! \n\n");
	      }
	      else
	      {
	      	total_of_student+=marks;		  	
		
		    if(marks>=35)
		    {
		      pass_subjects++;
		    }
		    else
		    {
		      fail_subjects++;
	        }
		  }
	    }
	    while(marks<0 || marks>100);							    
	  }   
	  average_of_student=(float)total_of_student/no_of_subjects;	
	  average_of_all+=(float)average_of_student;
	  
	  if(best_average<=average_of_student)
	  {
	  	best_average=average_of_student;
	  }
	  
	  printf("\n\t\t**Total of the student        : %d",total_of_student);
	  printf("\n\t\t**Average marks of the student: %.2f%c",average_of_student,a);
      printf("\n\n\t\t**Pass subjects of the student: %d",pass_subjects);
	  printf("\n\t\t**Fail subjects of the student: %d",fail_subjects);
	  
	  if(average_of_student>=30.00)
	  {
	  	pass_students++;
	  }
	  else
	  {
	  	fail_students++;
	  }	
	  	      
	  total_of_student=0;
	  average_of_student=0;
	  pass_subjects=0;
	  fail_subjects=0;   
	}
	overall_average=(float)average_of_all/no_of_students;
	pass_students_percentage=(float)pass_students*100/no_of_students;
	fail_students_percentage=(float)fail_students*100/no_of_students;
	
	printf("\n\n\n\n__OVERALL SUMMERY__");
	printf("\n\n  *Overall average of students: %.2f%c",overall_average,a);
	printf("\n  *Best average of students   : %.2f%c",best_average,a);
	printf("\n\n  *Pass students count: %d (%.2f%c)",pass_students,pass_students_percentage,a);
	printf("\n  *Fail students count: %d (%.2f%c)",fail_students,fail_students_percentage,a);
	printf("\n\n\n\n\n      ______PROGRAMME END______");
	printf("\n\n\n  Press Enter To Exit!");
	getch();	
}
