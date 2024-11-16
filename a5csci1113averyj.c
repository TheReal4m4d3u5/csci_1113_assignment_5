/* 
                                    Avery Jacobson
                                    csci 1113
                                    assignment 5
                                    James Polzin



Assignment 5:                Given: 02/06/14     Due: 02/13/14
------------                                  Points: 10
Purpose: - Use loops

  Description:
  -----------
  Modify your assignment #4 program so that any repeated code 
  is inside a looping structure, so that it is only written once 
  and a loop causes it to repeat.

Notes:
-----
  - All assignment #4 features and requirements still apply
   
  - Make incremental changes:
  
    Before introducing the loops:
    - Eliminate "similar" variables. Adjust your code so that 
      there is only one set of variables that are repeatedly 
      used and loaded for each successive computation
    - Identify code that only ever executes once and place it 
      before or after repeated code, as appropriate
    - Separate blocks of code that recur so it is visually 
      apparent that there are "supersets" of repeated code
      
    Introduce loops:
    - Add a loop to an "innermost" series of repeated 
      instructions to eliminate the repeated code.
      - repeat for any additional "innermost" repeated
        code
    - Add an "outer" loop to repeat any similar loops 
      within your program
    Then combine the simpler programs to produce your
    solution to the problem.
    
  - Submit 3.6 as #5-6 and 3.7 as #5-7; since they are for 
    Assignment #5.
  

 */

#include <stdio.h>

int main(void)
{
    double dist;
    int   input, velocity, time, accel, n;
    
    FILE *inptr;
    inptr=fopen ("DISTANCE.DAT","r"); 
    FILE *myfile; 
    myfile = fopen("DISTANCE.OUT","w"); 
    
    n =0;
     
    fprintf(myfile,"Car under constant accleceration\n\nInital\nvelocity   time    acceleration     distance\n_________  _____   _____________    ________\n");  

 
    while(fscanf(inptr,"%i",&input) == 1)
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



