//this is Axum University Grade report in c programing

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    void gradeReport(int *n,int *x ){
    	
	  struct students
	{
		 int id[*x];
	     char name[*x];
		 char s_code[*n];
		 char grade[*n];
	} s[*x],c[*n],g[*n];  //variable s=for students, c= for course, g= for grade are variables of type students

    	int* ptr1;
		int* ptr2;
    	ptr1 = (int*)malloc(*n * sizeof(int)); 
    	ptr2 = (int*)malloc(*x * sizeof(int)); 
    	int i=0,j=0;
    	char* course_Name[5]={"Data_Structure","OpratingSystem","Computer_Netwo","Comput_methods","AdvSoftware"};
    	int credit[5] = {4, 4, 3, 4, 4};// Assume course_Name and credit are stored in array instead of scanning from user but it is possible to scan
    	
	    for(j=0;j<*x;j++){
	        printf("Enter ID_Number: ");
	        scanf("%s",&s[j].id);
	        printf("Enter User_Name: ");
	        scanf("%s",&s[j].name);
	    for(i=0;i<*n;i++){
	        printf("Enter Course_code %d: ",i+1);
	        scanf("%s",&c[i].s_code);
	        printf("Enter grade %d: ",i+1);
	        scanf("%s",&g[i].grade);
	        printf("\n");
	    }
		    printf("Displaying Information Of a student:\n\n");
		    // this is used to display information of a student

          i=0;
        printf("   AXUM UNIVERSITY\n");
        printf("   Student Grade Report\n\n");
        printf(" ID_Number: %s\n",s[j].id);
        printf(" User_Name: %s\n",s[j].name);
        printf(" CourseCode      Grade\n");
        
        for(i=0;i<*n;i++){
	        printf("   %s            %s",c[i].s_code,g[i].grade);
	        printf("\n");
	    }
	        printf("\n");
	        //i=0;
	        printf(" Code       Course_Name          Credit\n");
	    for(i=0;i<*n;i++){
	    	printf(" %s      %s        %d\n",c[i].s_code,course_Name[i],credit[i]);
		}
		printf("\n\n");
    
    }
    free(ptr1);
    free(ptr2);
    } 
    
    int main()
{
	int a,b;
	int* n; 
	int* x;
		n=&a;
		x=&b;
    printf("    Enter information of a student below:\n\n");
    printf("Enter The Total Number of Students:\n");
    scanf("%d",x);  //or &a
    printf("Enter The total Number of courses\n");
    scanf("%d",n); //or &b    
      gradeReport(n,x);// i am passing by reference x=addess of the total num of students and n=addess of the total num of courses
    
  return 0;
}
