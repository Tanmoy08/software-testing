#include<stdio.h>
int main()
{	char grade;
	float percentage;
	printf("Enter the percentage\n");
	scanf("%f",&percentage);
	if(percentage>90.0)
		grade='A';
	else if(percentage>80 && percentage<=90)
		grade='B';
	else if(percentage>70 && percentage<=80)
		grade='C';
	else if(percentage>60 && percentage<=70)
		grade='D';
	else 
		grade='E';
	switch(grade){
		case 'A' :printf("Excellent\n");
		break;
		case 'B' : printf("Very Good\n");
		break;
		case 'C' : printf("Good\n");
		break;
		case 'D' : printf("Above Average\n");
		break;
		case 'E' : printf("Satisfactory\n");
		break;
		default : printf("Invalid\n");
}}
