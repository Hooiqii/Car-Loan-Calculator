/* Car loan Calculator Formula :
1. bank_loan = price - down_payment
2. bank_interest = bank_loan * interest_rate * loan_duration (year)
3. total_loan_payment = bank_loan + bank_interest
4. monthly_repayment = total_loan_payment / loan_duration (month)
*/
#include <stdio.h>
float payment;
float monthly_payment;
float x,y;

float paymenttype_a (float);
float paymenttype_c (float);

int main()
{
	int loan_duration;
	float price, down_payment, interest_rate, bank_loan, bank_interest, total_loan_payment;
	char payment_method, payment_plan;
	char car_model, name[50];
    printf("Hello ~");
	printf("\nWelcome to the Car Loan Calculator!");
	printf("\nThis application is to help user compare the loan options and choose the most appropriate payment plan."); 
    printf("\nLimitation: This application only can calculate the car loan for car price from RM25,000 to RM500,000.");
	printf("\n\n*************************************************************************************************************");
	printf ("\n1.Please enter your name: ");
	gets (name);
	printf("\n2. Please enter your vehicle.");
	printf("\nPlease state the car model: ");
	scanf("%s", &car_model);
	printf("\n3. Calculate your loan.");
	printf("\na)Please enter the car price (RM25,000-RM500,000): ");
	scanf("%f", &price);
	
	if (price>=25000 && price<=500000)
{
	printf("Please proceed to the next step.\n");
}
	else
{
	printf("\n==============================ERROR==============================");
	return 0;
}

	
	printf("\nb)Please enter the down payment amount (RM): ");
    scanf("%f",  &down_payment);
    
	printf("\nc)Please enter the annual interest rate of loan (1-8): ");
    scanf("%f", &interest_rate); 
    
	if(interest_rate>=1 && interest_rate<=8)
{
	printf("Please proceed to choose the payment plan.");
} 

	else 
{
	printf("\n==============================ERROR==============================");
	return 0;
}
	
	bank_loan = price - down_payment;
	total_loan_payment = bank_loan + bank_interest;

	printf("\n\t___________________________________________________________________");
	printf("\n\t Payment Plan    Month        Payment Details                      ");
	printf("\n\t___________________________________________________________________");
	printf("\n\t      A           36          Bank Loan = RM%.2f                     ", bank_loan);                                           
	printf("\n\t               (3 years)      Bank Interest = RM%.2f                 ", bank_loan * (interest_rate/100)* 3);
	printf("\n\t                              Total Loan Payment = RM%.2f            ", bank_loan + bank_loan * (interest_rate/100)* 3);
	printf("\n\t                              Monthly Repayment = RM%.2f             ",  (bank_loan + bank_loan * (interest_rate/100)* 3) / 36);
	printf("\n\t___________________________________________________________________");
	printf("\n\t      B           48          Bank Loan = RM%.2f                     ", bank_loan);                                           
	printf("\n\t               (4 years)      Bank Interest = RM%.2f                 ", bank_loan * (interest_rate/100)* 4);
	printf("\n\t                              Total Loan Payment = RM%.2f            ", bank_loan + bank_loan * (interest_rate/100)* 4);
	printf("\n\t                              Monthly Repayment = RM%.2f             ",  (bank_loan + bank_loan * (interest_rate/100)* 4) / 48);
	printf("\n\t___________________________________________________________________");
	printf("\n\t      C           60          Bank Loan = RM%.2f                     ", bank_loan);                                           
	printf("\n\t               (5 years)      Bank Interest = RM%.2f                 ", bank_loan * (interest_rate/100)* 5);
	printf("\n\t                              Total Loan Payment = RM%.2f            ", bank_loan + bank_loan * (interest_rate/100)* 5);
	printf("\n\t                              Monthly Repayment = RM%.2f             ",  (bank_loan + bank_loan * (interest_rate/100)* 5) / 60);
	printf("\n\t___________________________________________________________________");
	printf("\n\t      D           72          Bank Loan = RM%.2f                     ", bank_loan);                                           
	printf("\n\t               (6 years)      Bank Interest = RM%.2f                 ", bank_loan * (interest_rate/100)* 6);
	printf("\n\t                              Total Loan Payment = RM%.2f            ", bank_loan + bank_loan * (interest_rate/100)*6);
	printf("\n\t                              Monthly Repayment = RM%.2f             ",  (bank_loan + bank_loan * (interest_rate/100)* 6) / 72);
	printf("\n\t___________________________________________________________________");
	printf("\n\t      E           84          Bank Loan = RM%.2f                     ", bank_loan);                                           
	printf("\n\t               (7 years)      Bank Interest = RM%.2f                 ", bank_loan * (interest_rate/100)* 7);
	printf("\n\t                              Total Loan Payment = RM%.2f            ", bank_loan + bank_loan * (interest_rate/100)* 7);
	printf("\n\t                              Monthly Repayment = RM%.2f             ",  (bank_loan + bank_loan * (interest_rate/100)* 7) / 84);
	printf("\n\t___________________________________________________________________");
    printf("\n\nThis table shows the type of payment plan which consists of the loan duration and payment details.");
	printf("\n\nPlease choose your payment plan: ");
	scanf("%s", &payment_plan);
	printf("\nBelow is the payment details of your chosen payment plan :");
	if(payment_plan == 'A' || payment_plan == 'a')
{
	printf ("\nCustomer's Name : %s", name);
	printf("\nBank Loan : RM%.2f", bank_loan);
	printf("\nBank Interest : RM%.2f", bank_loan * (interest_rate/100)* 3);
	printf("\nTotal Loan Payment : RM%.2f", bank_loan + bank_loan * (interest_rate/100)* 3);
	printf("\nMonthly Repayment : RM%.2f", (bank_loan + bank_loan * (interest_rate/100)* 3) / 36);
} 
	
	else if(payment_plan == 'B' || payment_plan == 'b')
{
	printf ("\nCustomer's Name : %s", name);
	printf("\nBank Loan : RM%.2f", bank_loan);
	printf("\nBank Interest : RM%.2f", bank_loan * (interest_rate/100)* 4);
	printf("\nTotal Loan Payment : RM%.2f", bank_loan + bank_loan * (interest_rate/100)* 4);
	printf("\nMonthly Repayment : RM%.2f", (bank_loan + bank_loan * (interest_rate/100)* 4) / 48);
}
	
	else if(payment_plan == 'C' || payment_plan == 'c')
{
	printf ("\nCustomer's Name : %s", name);
	printf("\nBank Loan : RM%.2f", bank_loan);
	printf("\nBank Interest : RM%.2f", bank_loan * (interest_rate/100)* 5);
	printf("\nTotal Loan Payment : RM%.2f", bank_loan + bank_loan * (interest_rate/100)* 5);
	printf("\nMonthly Repayment : RM%.2f", (bank_loan + bank_loan * (interest_rate/100)* 5) / 60);
}

	else if(payment_plan == 'D' || payment_plan == 'd')
{
	printf ("\nCustomer's Name : %s", name);
	printf("\nBank Loan : RM%.2f", bank_loan);
	printf("\nBank Interest : RM%.2f", bank_loan * (interest_rate/100)* 6);
	printf("\nTotal Loan Payment : RM%.2f", bank_loan + bank_loan * (interest_rate/100)* 6);
	printf("\nMonthly Repayment : RM%.2f", (bank_loan + bank_loan * (interest_rate/100)* 6) / 72);
}     

    else if(payment_plan == 'E' || payment_plan == 'e')
{
	printf ("\nCustomer's Name : %s", name);
	printf("\nBank Loan : RM%.2f", bank_loan);
	printf("\nBank Interest : RM%.2f", bank_loan * (interest_rate/100)* 7);
	printf("\nTotal Loan Payment : RM%.2f", bank_loan + bank_loan * (interest_rate/100)* 7);
	printf("\nMonthly Repayment : RM%.2f", (bank_loan + bank_loan * (interest_rate/100)* 7) / 84);
}
	else 
{
	printf("\nNot in the list!");
}
    char method;
    printf("\n\n");
	printf("\n\t******************************************************************************");
    printf("\n\t| Option |                Type of Payment for Car Loan                       |");
    printf("\n\t|________|___________________________________________________________________|");  
    printf("\n\t|   A    |  Debit Card / Credit Card                                         |");
    printf("\n\t|   B    |  Online Payment (FPX Online Banking)                              |");
    printf("\n\t|   C    |  Bank Transfer                                                    |");
    printf("\n\t|   D    |  Cash                                                             |");
    printf("\n\t|   E    |  Other type of payment (Cryptocurrency, Electronic Check)         |");
    printf("\n\t******************************************************************************");
    printf("\nThis table shows the payment options. ");
    printf("\nOption A will be given 3 percent discount.");
    printf("\nOption C will be charged transaction fee of RM1.00.");
	printf ("\n\nPlease enter selection of payment method : ");
	scanf ("%s", &method);
	
	switch (method)
	{
		case 'A':
		case 'a':
			printf ("Please enter Monthly Repayment (RM) : "); 
			scanf ("%f", &monthly_payment);
			printf ("\n\nYour chosen payment method is Debit Card/Credit Card.");
			printf ("\n3 percent discount is given for using this type of payment");
			paymenttype_a (x);
			break;
		case 'B':
		case 'b':
			printf("Please enter Monthly Repayment (RM) : ");
			scanf ("%f", &monthly_payment);
			printf ("\n\nYour chosen payment method is Online Payment.");
			printf ("\nMonthly Repayment : RM%.2f", monthly_payment);
			break;
		case 'C':
		case 'c':
			printf ("Please enter Monthly Repayment : ");
			scanf ("%f", &monthly_payment);
			printf ("\n\nYour chosen payment method is Bank Transfer.");
			printf ("\nTransaction Fee is RM1.00");
			paymenttype_c (y);
			break;
		case 'D' :
		case 'd' :
			printf("Please enter Monthly Repayment (RM) : ");
			scanf ("%f", &monthly_payment);
			printf ("\n\nYour chosen payment method is Cash.");
			printf ("\nMonthly Repayment : RM%.2f", monthly_payment);
			break;
		case 'E':
		case 'e':
			printf("Please enter Monthly Repayment (RM) : ");
			scanf ("%f", &monthly_payment);
			printf ("\n\nYour chosen payment method is Others (Crytocurrency, Electronic Check)");
			printf ("\nMonthly Repayment : RM%.2f", monthly_payment);
			break;
		default:
			printf ("Please enter valid option");
	}
	
	printf("\n\nThank you for using this application !");
	printf("\n\n======================================= THE END ========================================\n");
}
float paymenttype_a (float x)
{
	double payment;
	payment = monthly_payment * 0.97;
	printf ("\nNew Monthly Repayment : RM%.2f", payment);
}

float paymenttype_c (float y)
{
	double payment;
	payment = monthly_payment + 1.00;
	printf ("\nNew Monthly Repayment : RM%.2f", payment);
}
