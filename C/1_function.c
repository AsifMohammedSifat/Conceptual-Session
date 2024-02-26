1) Function
    1.1- What is Function?
    Ans: A set of Code or block of code to perform specific task.

    1.2- Why Do We Need Functions in C Programming?
    Ans:
        - Enables reusability and reduces redundancy
        - The program becomes easy to understand and manage
        - Breaks an extensive program into smaller and simpler pieces

            #include<stdio.h>
            int avgOfTwo(int num1,int num2){
                int sum = num1+num2;
                int avg = sum/2;
                return avg;
            }

            int main(){
                int a,b;
                scanf("%d%d",&a,&b);
                // int sum = a+b;
                // int avg = sum/2;
                // printf("%d\n",avg);
                printf("%d\n",avgOfTwo(a,b));    

                // int c,d;
                // scanf("%d%d",&c,&d);
                // int sum1 = c+d;
                // int avg1 = sum1/2;
                // printf("%d\n",avg1);

                int c,d;
                scanf("%d%d",&c,&d);
                printf("%d\n",avgOfTwo(c,d));                      
                        
                return 0;
            }


    1.3- Basic Syntax of Functions:
    Ans: 
        return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2, ...) {
                // Function body
        }


    1.4- Types of Function with example
    Ans:
    - Standard library functions
        Ans: printf(),scanf()
        
    - User-defined functions
        I) No Parameters and No Return Value
            Ans: 
                #include <stdio.h>

                // Function declaration | function prototype
                // A function prototype in C is a declaration of a function that tells the compiler about the function's name, return type, and the types of its parameters.

                void greet();

                int main() {
                    // Function call
                    greet();
                    return 0;
                }

                // Function definition
                void greet() {
                    // Function body
                    printf("Hello, welcome!\n");
                }

        II) with Parameters and No Return Value
            Ans:
                #include<stdio.h>
                void avgOfTwo(int num1,int num2){
                    int sum = num1+num2;
                    int avg = sum/2;
                    printf("%d\n",avg); 
                }

                int main(){
                    int a,b;
                    scanf("%d%d",&a,&b);
                    avgOfTwo(a,b);
                    return 0;
                }

        III) No Parameters and with return value
            Ans:
                #include<stdio.h>

                double PHI(){
                    return 3.1416;
                }

                int main(){
                    int r;
                    r = 5;
                    double area = 2*PHI()*r;  
                    printf("%lf",area);     
                            
                    return 0;
                }
               


        IV) with Parameters and Return Value
            Ans:
                #include<stdio.h>
                int avgOfTwo(int num1,int num2){
                    int sum = num1+num2;
                    int avg = sum/2;
                    return avg;
                }

                int main(){
                    int a,b;
                    scanf("%d%d",&a,&b);
                    printf("%d\n",avgOfTwo(a,b)); 
                    return 0;
                }





Advance Quesiton: Is there any way where i can pass any amount of number but just use one parameter

Ans: Yes, ellipsis(...)
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);

    return total;
}

int main() {
    printf("Sum: %d\n", sum(3, 1, 2, 3)); // Pass any number of integers
    printf("Sum: %d\n", sum(5, 10, 20, 30, 40, 50)); // Pass a different number of integers

    return 0;
}
