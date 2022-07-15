// This program computes the score needed on a final exam
// to achieve a desired grade based of final exam worth and
// current grade.

#include <stdio.h>

int main()
{
	float min, avg, examWorth;
	char str[1];

	printf("Enter 0 to exit program\n");
	printf("Enter your current average: ");
	scanf("%f", &avg);
	
	printf("Enter your desired grade (A, B, C): ");
	scanf("%s", str);
	
	printf("Enter the overall percentage required to get a %s: ", str);
	scanf("%f", &min);

	printf("Enter the final exams percentage weighting: ");
	scanf("%f", &examWorth);

	while (avg >  0) {
		float currentOverall = avg / 100 * (100 - examWorth);
		float maximumPossible = currentOverall + (100 - examWorth);

		if (maximumPossible < min) {
			printf("An overall %s is not attainable with your current grades, sorry.\n", str);
		} else {
			float requirement = (min - currentOverall) / examWorth * 100;
		        printf("You must achieve %f percent in the final exam, to get a %s.\n", requirement, str);	
		}

		printf("Enter your current average: ");
		scanf("%f", &avg);
	
		printf("Enter your desired grade: ");
		scanf("%s", str);
	
		printf("Enter the overall minimum percent required for this grade: ");
		scanf("%f", &min);

		printf("Enter the final exams percentage toward your final grade: ");
		scanf("%f", &examWorth);
	}

	return 0;
}	
