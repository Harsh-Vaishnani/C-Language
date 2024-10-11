    //  QUESTION-1

     int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("The number is even.  ....THANKYOU....\n") : printf("This number is odd  ....THANKYOU....\n");


    // QUESTION-2
    
    int month;
    printf("Enter the name of Month ");
    scanf("%d",&month);
    switch(month){
        case 1:{
            printf("JANUARY");
            break;
        }
          case 2:{
            printf("FEBRUARY");
            break;
        }
          case 3:{
            printf("MARCH");
            break;
        }
              case 4:{
            printf("APRIL");
            break;
        }
              case 5:{
            printf("MAY");
            break;
        }
              case 6:{
            printf("JUNE");
            break;
        }
              case 7:{
            printf("JULY");
            break;
        }
              case 8:{
            printf("AUGUEST");
            break;
        }
              case 9:{
            printf("SEPTEMBER");
            break;
        }
              case 10:{
            printf("OCTOMBER");
            break;
        }
              case 11:{
            printf("NOVEMBER");
            break;
        }
              case 12:{
            printf("DECEMBER");
            break;
            
            default :{
                printf("Invalid Number");
            }
        }
    }


    // QUESTION-3

    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
        printf("%d is a leap year.\n", year);
        } else
        {
        printf("%d is not a leap year.\n", year);
        }