/* Lesson for 3_6 */

#include <stdio.h>

int main(void)
{
    double xx ;
    int   ii, kk, n; 
    FILE *inptr;
    inptr=fopen ("DISTANCE.DAT","r"); 
    
    FILE *myfile; 
    myfile = fopen("DISTANCE1.OUT","w"); 
    n =0;
 
 
 
    while(fscanf(inptr,"%d",&ii) == 1)
    {        
      
       fprintf(myfile,"oder of input=%5i\n", n);  
         
                                
        n++;
        
    }
    
    fclose(inptr); 
    fclose(myfile);  

 

 
 return 0;

}



