
                // QUESTION-1

// #include <stdio.h>
// float que1(float a[],int n);
// int main(){
//     float a[]={6, 7, 8, 9, 5};
//     int n=sizeof(a)/sizeof(a[0]);
//     float avg=que1(a,n);
//     printf("average is %.2f",avg);
//     return 0;
// }
// float que1(float a[],int n) {
//     int i;
//     float sum=0.0;
//     for (i=0;i<n;i++) {
//         sum+=a[i];
//     }
//     return sum/n;
// }

            // QUESTION-2

// #include <stdio.h>

// void hrs(int num){
//     if(num){
//         hrs(num-1);
//         printf("%d\n",num);}
// }

// int main(){
//     hrs(10);
//     return 0;
// }            


        // QUESTION-3


#include <stdio.h>
#include <ctype.h>
void harsh(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

int main() {
    char myString[100];
    fgets(myString, sizeof(myString), stdin);
    if (myString[strlen(myString)-1] == '\n') {
        myString[strlen(myString)-1] = '\0';
    }
    harsh(myString);
    printf("%s\n",myString);
    return 0;
}

