#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

                void addition();
                void subtraction();
                void multiplication();
                void division();
                void modulus();
                void power();
                int factorial();
                void calculator_operations();
                 

                        int main()
                        {
                            char Calc_oprn;
                            int y=1;
                            
                            calculator_operations();
                                printf("\n");
                         printf("\n Enter choice:");
                                scanf("%c",&Calc_oprn);
                         while(y==1)
                            {
                                switch(Calc_oprn)
                                {
                                    case '+': addition();
                                                printf("Continue addition ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '-': subtraction();
                                    printf("Continue subtraction ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '*': multiplication();
                                    printf("Continue multiplication ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '/': division();
                                    printf("Continue division ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '?': modulus();
                                    printf("Continue modulus ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '!': factorial();
                                    printf("Continue factorial ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                         
                                    case '^': power();
                                    printf("Continue power form ? y-1/n-0 \n");
                                                scanf("%d",&y);
                                              break;
                        
                                    case 'Q':
                                    case 'q': exit(0);
                                              break;
                                    default : system("cls");
                         
                            printf("\n**********You have entered unavailable option");
                            printf("***********\n");
                            printf("\n*****Please Enter any one of below available ");
                            printf("options****\n");
                                              calculator_operations();
                                              
                                }
                            }
                        }
                         
                        
                         
                        void calculator_operations()
                        {
                            
                            printf("\n             Welcome to C calculator \n\n");
                         
                            printf("******* Press 'Q' or 'q' to quit ");
                            printf("the program ********\n");
                            
                            printf(" display available option \n\n");
                         
                            printf("Enter + symbol for Addition \n");
                            printf("Enter - symbol for Subtraction \n");
                            printf("Enter * symbol for Multiplication \n");
                            printf("Enter / symbol for Division \n");
                            printf("Enter ? symbol for Modulus\n");
                            printf("Enter ^ symbol for Power \n");
                            printf("Enter ! symbol for Factorial \n\n");
                        }
                         
                        void addition()
                        {
                             long int n, total=0, k=0, number;
                            printf("\nEnter the number of elements you want to add:");
                            scanf("%ld",&n);
                            printf("Please enter %ld numbers one by one: \n",n);
                            while(k<n)
                            { 
                                scanf("%ld",&number);
                                total=total+number;
                                k=k+1;
                            }
                            printf("Sum of %ld numbers = %ld \n",n,total);
                        }
                         
                        void subtraction()
                        { 
                           long int a, b, c = 0; 
                            printf("\nPlease enter first number  : "); 
                            scanf("%ld", &a); 
                            printf("Please enter second number : "); 
                            scanf("%ld", &b); 
                            c = a - b; 
                            printf("\n%ld - %ld = %ld\n", a, b, c); 
                        }
                         
                        void multiplication()
                        {
                           long int a, b, mul=0; 
                            printf("\nPlease enter first numb   : "); 
                            scanf("%ld", &a); 
                            printf("Please enter second number: "); 
                            scanf("%ld", &b);
                            mul=a*b;
                            printf("\nMultiplication of entered numbers = %ld\n",mul);
                        }
                         
                        void division()
                        {
                           long int a, b, d=0; 
                            printf("\nPlease enter first number  : "); 
                            scanf("%ld", &a); 
                            printf("Please enter second number : "); 
                            scanf("%ld", &b);
                            d=a/b;
                            printf("\nDivision of entered numbers=%ld\n",d);
                        }
                         
                        void modulus()
                        {
                           long int a, b, d=0; 
                            printf("\nPlease enter first number   : "); 
                            scanf("%ld", &a); 
                            printf("Please enter second number  : "); 
                            scanf("%ld", &b);
                            d=a%b;
                            printf("\nModulus of entered numbers = %ld\n",d); 
                        }
                         
                        void power()
                        {
                            double a,num, p;
                            printf("\nEnter two numbers to find the power \n");
                            printf("number: ");
                            scanf("%lf",&a);
                         
                            printf("power : ");
                            scanf("%lf",&num);
                         
                            p=pow(a,num);
                         
                            printf("\n%lf to the power %lf = %lf \n",a,num,p);
                        }
                         
                       long int factorial()
                        {
                             long int i,fact=1,num;
                         
                            printf("\nEnter a number to find factorial : ");
                            scanf("%ld",&num);
                         
                            if (num<0)
                            {
                                printf("\nPlease enter a positive number to");
                                printf(" find factorial and try again. \n");
                                printf("\nFactorial can't be found for negative");
                                printf(" values. It can be only positive or 0  \n");
                                return 1;
                            }               
                         
                            for(i=1;i<=num;i++)
                            fact=fact*i;
                            printf("\n");
                            printf("Factorial of entered number %ld is:%ld\n",num,fact);
                            return 0;
                        }
