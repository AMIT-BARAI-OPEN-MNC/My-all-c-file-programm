
#include <stdio.h>

int main()
{
   float v,r1,r2,vo=0;
   int R_value;
   float re1,re2;
    
   printf("\n enter voltage :- ");
   scanf("%f",&v);
    printf("\nWhat type of 'Resistor' value are you Entered 'ohm'_value or 'Kohm'_value or 'Mohm'_value ");
    
    printf("\n If it is 'ohm'_value Then Enter =  1 ");
    printf("\n If it is 'Kohm'_value Then Enter = 2 ");
    printf("\n If it is 'Mohm'_value Then Enter = 3 ");
    scanf("%d",&R_value);
    
   printf("\n enter R1 Resistoe value :- ");
   scanf("%f",&r1);
   printf("\n enter R2 Resistor value :- ");
   scanf("%f",&r2);
   
   switch(R_value)
   {
       case 1 :
       vo=(v*r2)/(r1+r2);
        printf(" The devider voltage is- %f ",vo);
       break;
       case 2 :
       re1=r1*1000;
       re2=r2*1000;
       vo=(v*re2)/(re1+re2);
        printf(" The devider voltage is- %f ",vo);
       break;
       case 3 :
       re1=r1*1000000;
       re2=r2*1000000;
       vo=(v*re2)/(re1+re2);
       printf(" The devider voltage is- %f ",vo);
       break;
       default :
       printf("Your input is not correct:- ####@@@@, Try again");
       break;
       
   }
   

    return 0;
}
