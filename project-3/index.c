#include <stdio.h>

int main()
{

// -------------------------------QUE-1-------------------------------

    char alpha='a';
    do{
        printf("%c\n",alpha);
        alpha+=4;
    }
    while(alpha<='z');
    return 0;
    
}

// -------------------------------QUE-2-------------------------------

int num;
printf("Enter the First Value ");
scanf("%d",&num);
int k;
printf("Enter the Second value ");
scanf("%d",&k);
int plus;
for(int i=1; i<num; i++){
    if(i%k==0){
        plus+=i;
    }
} printf("%d\n",plus);
    
    return 0;
    
}