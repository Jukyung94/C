#include <stdio.h>
#include <string.h>

//calculate the ratio who had

int main(void)
{
   int C,s; //Test cases, number of students 
   int i,j,m; //variables for loops
   
   scanf("%d", &C); //Input total number of the test cases
   
   for(i = 0; i < C; i++)
   {
   		scanf("%d", &s); //Input number of students
   		int arr[s]; //generate an array to put students' score
   		int avg = 0; //reset average
   		int sum = 0; 
		
		//Input scores to calculate average score
		for(j = 0; j < s; j++)
		{
			scanf("%d", &arr[j]); //Input scores
			sum += arr[j]; //sum of scores
		}
		avg = sum/s; //average score
		
		int count = 0; //count variable
		
		//ratio of students who score higher than average averoge score
		for(m = 0; m < s; m++)
		{
			if(arr[m] > avg)
				count++;
		}
		float ratio = (double)count/(double)s *100;
		printf("%.3f%% \n", ratio);
	}
	
	return 0;
}
