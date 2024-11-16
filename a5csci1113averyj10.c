/* Lesson for 3_6 */

#include <stdio.h>

int main(void)
{
    double d1;
    int   ii, iv1, t1,a1, n;
    
    FILE *inptr;
    inptr=fopen ("DISTANCE.DAT","r"); 
    FILE *myfile; 
    myfile = fopen("DISTANCE1.OUT","w"); 
    
    n =0;
     
    fprintf(myfile,"Car under constant accleceration\n\nInital\nvelocity   time    acceleration     distance\n_________  _____   _____________    ________\n");  

 
    while(fscanf(inptr,"%d",&ii) == 1)
    {  
       switch(n)
       {
        case 0:
             iv1 = ii;
             break;
        case 1:
             t1 = ii;
             break;
        case 2:
             a1 = ii;
             break;
        case 3:
             a1 = ii;
             break;
        case 4:
             a1 = ii;
             break;
        case 5:
             a1 = ii;
             break;
        case 6:
             a1 = ii;
             break;
        case 7:
             iv1 = ii;
             break;
        case 8:
             t1 = ii;
             break;
        case 9:
             a1 = ii;
             break;   
        case 10:
             a1 = ii;
             break; 
        case 11:
             a1 = ii;
             break;    
        case 12:
             a1 = ii;
             break;
        case 13:
             a1 = ii;
             break;   
        }
       
        
       d1 =  (iv1*t1) +  (.5 * (double)a1 * pow((double)t1,2));
                                 
       if((n ==2) || (n ==9))                                
             fprintf(myfile,"\n%i  %i %12i %15.2lf\n", iv1, t1, a1, d1);
       
       if( ((n > 2) && (n < 7)) || ((n>9) && (n <14)) )                                
             fprintf(myfile,"\n %26i %15.2lf\n", a1, d1);      
                                  
       n++;  
    }
    
    
    fclose(inptr); 
    fclose(myfile);  

 

 
 return 0;

}



