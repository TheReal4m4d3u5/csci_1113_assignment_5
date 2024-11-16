/* 
                                    Avery Jacobson
                                    csci 1113
                                    assignment 5
                                    James Polzin

 */

#include <stdio.h>

int main(void)
{
    double dist;
    int   input, velocity, time, accel, n;
    
    FILE *inptr;
    inptr=fopen ("DISTANCE.DAT","r"); 
    FILE *myfile; 
    myfile = fopen("DISTANCE1.OUT","w"); 
    
    n =0;
     
    fprintf(myfile,"Car under constant accleceration\n\nInital\nvelocity   time    acceleration     distance\n_________  _____   _____________    ________\n");  

 
    while(fscanf(inptr,"%d",&input) == 1)
    {  
       switch(n)
       {
        case 0:
             velocity = input;
             break;
        case 1:
             time = input;
             break;
        case 7:
             velocity = input;
             break;
        case 8:
             time = input;
             break;
        case 9:
             fprintf(myfile,"\n"); 
             break;   
        }

	    if( ((n >=2) && (n<7)) || ((n >=9) && (n <14)) )         
		    accel = input;
        
	    dist =  ((double)velocity*(double)time) +  (.5 * (double)accel * pow((double)time,2));
        
                                     
       	if((n ==2) || (n ==9))                                
             fprintf(myfile,"\n%5i m/s %4i s %9i m/s^2 %9.2lf m\n", velocity, time, accel, dist);
       
       	if( ((n > 2) && (n < 7)) || ((n>9) && (n <14)) )                                
             fprintf(myfile,"\n %25i m/s^2 %9.2lf m\n", accel, dist);      
                                  
       	n++;  
    }
    
    
    fclose(inptr); 
    fclose(myfile);  

 

 
 return 0;

}



