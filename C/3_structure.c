

3) Structure
    3.1- What is Structure?
    Ans: In C, a structure is a composite data type that allows you to group variables of different data types under a single name.

    #include<stdio.h>
    #include<string.h>

    struct Student
    {
        int id;
        char name[10];
        char sec;
    };



    int main(){
        struct Student Rahim;
        
        Rahim.id = 1;
        strcpy(Rahim.name,"Rahim");
        Rahim.sec = 'A';


        printf("%d %s %c",Rahim.id,Rahim.name,Rahim.sec); 

        return 0;
    }


    



4) Array of Structure

 int main(){
        struct Student one[10];
      
        // one[0].id = 1;
        // strcpy(one[0].name,"Rahim");
        // one[0].sec = 'A';

        // printf("%d %s %c",one[0].id,one[0].name,one[0].sec); 

        for(int i=0;i<2;i++){
            scanf("%d %s %c",&one[i].id,&one[i].name,&one[i].sec);
        }

        for(int i=0;i<2;i++){
            printf("%d %s %c",one[i].id,one[i].name,one[i].sec);
        }

        return 0;
    }







