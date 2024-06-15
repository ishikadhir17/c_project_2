#include<stdio.h>
#include<stdlib.h>
#include<time.h>  
   int snakewatergum(char you, char comp)
   {
    //return 1 if u win return 1 if u lose and -1 if draw anf if similar then 0
    //possible cases
    //sg
    //sw
    //wg
    
    if(you == comp){
        return 0;
    }
    else if(you == 's' && comp == 'g'){
      return -1;
    }
    else if( you == 'g'&& comp=='s'){
        return 1;
    }
    
    if(you == 's' && comp == 'w'){
        return 1;
    }
    else if (you == 'w' && comp== 's'){
        return -1;
    }

    if(you =='w' && comp=='g'){
         return 1;

    }
    else if( you == 'g' && comp== 'w'){
             return -1;
         
    }
   } 
    int main(){
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    if(number<33)
    {
       comp = 's'; 
    }
    else if (number>33 && number<66 )
    {
        comp ='w';
    }
    else 
    {
        comp = 'g';
    }
   // comp = 's';
    printf("enter 's' for snake, 'w' for water, and 'g' for gum\n");
    scanf("%c", &you);
    int result = snakewatergum(you, comp);
    printf("you choose %c and computer choose %c. \n",you ,comp );
    if (result==0)
    {
        printf("game drawn\n");
    }
    else if(result==1){
       printf("yeah you win\n");
    }
    else if (result==-1)
    {
         printf("oohh! you lose \n");
    }
    else {
        printf(" you have to choose from s , w ,g choose again ");
    }
return 0;
}

