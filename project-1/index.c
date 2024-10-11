#include <stdio.h>

int main()
{

// QUESTION NUMBER-1
  float  fahrenheit = (38 * 9/5 ) + 32;
  printf("%f",fahrenheit);


 // QUESTION NUMBER-2

   int main() {
    // Declare variables
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

    // Input base salary and allowance percentages
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercentage);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercentage);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercentage);

    // Calculate allowances
    float hra = (hraPercentage / 100) * baseSalary;
    float da = (daPercentage / 100) * baseSalary;
    float ta = (taPercentage / 100) * baseSalary;

    // Calculate gross salary
    grossSalary = baseSalary + hra + da + ta;

    // Display the result
    printf("\nBase Salary: Rs. %.2f\n", baseSalary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("TA: Rs. %.2f\n", ta);
    printf("Gross Salary: Rs. %.2f\n", grossSalary); 
   

// QUESTION NUMBER-3
     int fa=65;
    int sa=45;
    int ta=fa+sa;
    printf("%d",180-ta);

    return 0;
}
