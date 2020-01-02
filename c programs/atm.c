/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    #include <stdio.h>

    long unsigned int amount=1000, deposit, withdraw;
    int choice, pin, k;
    char transaction ='y';
  

    int main()

    {

            printf("ENTER YOUR SECRET PIN NUMBER:");

            scanf("%d", &pin);

            if (pin != 1234)

            printf("PLEASE ENTER VALID PASSWORD\n");

            printf("1. Check Balance\n");

            printf("2. Withdraw Cash\n");

            printf("3. Deposit Cash\n");

            printf("4. Quit\n");

            printf("********************************************\n\n");

            printf("Enter your choice: ");

            scanf("%d", &choice);

            switch (choice)

            {

            case 1:

                printf("\n YOUR BALANCE IN Rs : %lu ", amount);

                break;

            case 2:

                printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

                scanf("%lu", &withdraw);

                if (withdraw % 100 != 0)

                {

                    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

                }

                else if (withdraw >(amount - 500))

                {

                    printf("\n INSUFFICENT BALANCE");

                }

                else

                {

                    amount = amount - withdraw;

                    printf("\n\n PLEASE COLLECT CASH");

                    printf("\n YOUR CURRENT BALANCE IS%lu", amount);

                }

                break;

            case 3:

                printf("\n ENTER THE AMOUNT TO DEPOSIT");

                scanf("%lu", &deposit);

                            amount = amount + deposit;

                printf("YOUR BALANCE IS %lu", amount);

                break;

            case 4:

                printf("\n THANK U USING ATM");

                break;

            default:

                printf("\n INVALID CHOICE");

            }

            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

            fflush(stdin);

            scanf("%c", &transaction);

            if (transaction == 'y'|| transaction == 'Y')
                    k=1;
                    
            else

        printf("\n\n THANKS FOR USING OUT ATM SERVICE");

    }
