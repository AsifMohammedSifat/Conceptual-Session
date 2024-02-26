2) Pointer
    2.1- What is Pointer?
        Ans: Pointer is a variable which refer the address of other variable.

    2.2- Declaration and Initialization and Dereferencing
        Ans: 
            int *p;  // Declares a pointer to an integer
            int x = 10;  // Declare and initialize an integer variable
            int *p;      // Declare a pointer to an integer
            p = &x;      // Assign the address of x to the pointer p

    2.3- Pass by reference
        Ans:
        #include<stdio.h>

        void square(int* n)
        {
            *n = *n * *n;
        }
        int main(){
            int x = 5;
            square(&x);
            printf("%d",x);        
                    
            return 0;
        }
    2.4- Pointer to a pointer to a pointer
        Ans:
        #include<stdio.h>
        int main(){
            int x = 5;
            int* p = &x;
            int* q = p;
            int** q1 = &p;
            int*** r = &q1;     

            printf("%d\n",*p); 
            printf("%d\n",*q); 
            printf("%d\n",**q1); 
            printf("%d\n",***r); 
                    
            return 0;
        }

    2.5- Access Array element using pointer
        Ans:
        #include<stdio.h>
        int main(){
            int arr[5] = {5,10,15,20,25};
            printf("%d ",*arr+0);              
            printf("%d ",*(arr+1));              
            printf("%d ",*(arr+2));              
            printf("%d ",*(arr+3));              
            printf("%d ",*(arr+4));              
            return 0;
        }


