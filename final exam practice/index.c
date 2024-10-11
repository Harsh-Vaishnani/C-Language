// QUE-1 ***  Program to find the largest number of the three.

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the first value ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter the Second value ");
//     scanf("%d", &b);
//     int c;
//     printf("Enter the Third value ");
//     scanf("%d", &c);
//     if(a>b && a>c){
//         printf("A is big %d.",a);
//     }
//     if(b>a && b>c){
//         printf("B is big %d.",b);
//     }
//     if(c>a && c>b){
//         printf("C is big %d.",c);
//     }
// }

// QUE-2 ***   Program to calculate the grade of the student according to the specified marks.

// #include <stdio.h>
// int main(){
//     int mark;
//     printf("Enter the student mark ");
//     scanf("%d",&mark);
//     if(mark<=30){
//         printf("You are fail",mark);

//     }
//      else if(mark<=60){
//         printf("You have C grade");

//     }
//     else if(mark<=80){
//         printf("You have B grade");
//     }
//     else if(mark<=90){
//         printf("you have A grade");
//     }
//    else if(mark<=100){
//         printf("you have A++ grade");
//     }
//     else{
//         printf("Invalid Mark");
//     }
// }

// QUE-3 ***   Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//  For first 50 units Rs. 0.50/unit
//  For next 100 units Rs. 0.75/unit
//  For next 100 units Rs. 1.20/unit
//  For unit above 250 Rs. 1.50/unit
//  An additional surcharge of 20% is added to the bill

// #include <stdio.h>
// int main(){
//     float unit;
//     printf("Enter the Unit ");
//     scanf("%f",&unit);
//     float sum1=unit*0.50;
//     float sum2=unit*0.75;
//     float sum3=unit*1.20;
//     float sum4=unit*1.50;
//     if(unit<=50){
//         printf("Your unit charge is 0.50/unit\n");
//         printf("%f",sum1);
//     }
//     else if(unit<=100){
//         printf("Your unit charge is 0.75/unit\n");
//         printf("%f",sum2);
//     }
//     else if(unit<=200){
//         printf("Your unit charge is 1.20/unit\n");
//         printf("%f",sum3);
//     }
//     else if(unit<=250){
//         printf("Your unit charge is 1.50/unit]\n");
//         printf("%f",sum4);
//     }
//     else{
//         printf("An additional surcharge of 20 percent is added to the bill");
//     }
// }

// QUE-4 ***   Celsius -  Fahrenheit

// #include <stdio.h>
// int main(){
//     float c;
//     printf("Press C for Cel. ");
//     float f;
//     printf("Print F for Fen. ");
//     char t;
//     scanf("%c",&t);
//     if((t=='c')||(t=='C')){
//         printf("enter the c value ");
//         scanf("%f",&c);
//         f= (c*1.8)+32;
//         printf("your F is %.2f*f",f);
//     }
//     else if((t=='f')||(t=='F')){
//         printf("enter the f value ");
//         scanf("%f",&f);
//         c= (f - 32) / 1.8;
//         printf("your C is %.2f*c",c);
//     }
//     else{
//         printf("Invalid input");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int a;
    int b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    while(getchar()!='\n');
    scanf("%c",&c);
    
    return 0;
}