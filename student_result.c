 /* C program to Find Total, Average, and Percentage of Marks */ 

#include <stdio.h>  
int main()
{
    int Total_Subjects, i;  
    float Marks, Total, Average, Percentage;
    printf("Please enter the Total Number of Subjects\n");  
    scanf("%d", &Total_Subjects);  
    printf("Please Enter the Marks for each Subject\n");  
    for(i = 0; i < Total_Subjects; i++)
    {
     scanf("%f", &Marks);
     Total = Total + Marks; 
    }  
    Average = Total / Total_Subjects;
    Percentage = (Total/(Total_Subjects * 100)) * 100;  
    printf("Total Marks of %d Subjects = %0.2f\n",Total_Subjects,Total);  
    printf("Average Marks = %.2f\n", Average);  
    printf("Percentage = %.2f", Percentage ); 

        if(Percentage >= 90)
    {
    	printf("\n Grade A");
	}
	else if(Percentage >= 80)
    {
    	printf("\n Grade B");
	}
	else if(Percentage >= 70)
    {
    	printf("\n Grade C");
	}
	else if(Percentage >= 60)
    {
    	printf("\n Grade D");
	}
	else if(Percentage >= 40)
    {
    	printf("\n Grade E");
	}
	else 
    {
    	printf("\n Fail");
	}  
    return 0;  
}