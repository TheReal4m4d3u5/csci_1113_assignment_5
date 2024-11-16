/*
						Avery Jacobson
						    Jim Polzin
						     csci 1113
Purpose: - Do computations
         - Process sets of data
         - Do file I/O

Description:
-----------
Choose one of the two problems 3.6 or 3.7 on pgs. 163-165 from 
the application exercises at the end of chapter 3, based on 
your personal interests. One change; for 3.7 write your output
to a file named TEMPER.OUT, not just to the screen.

Notes:
-----
  - You create the input data files, just be sure to use the 
    names indicated in the exercise.
  - Your program will create output file.
  - Write several simpler programs first:
    - One to figure out how to do the math
    - Another that just reads in and prints your input data
    - And another to just display your output table
    Then combine the simpler programs to produce your
    solution to the problem.
    
  - Submit 3.6 as #4-6 and 3.7 as #4-7; since they are for 
    Assignment #4.
*/

/* Lesson for 3_6 */

#include <stdio.h>
#include <math.h>

int main(void)
{
// double xx, a2 ;
// int   ii, kk; 
 
 
 int   iv1, t1, a1, a2, a3, a4, a5;
 int   iv2, t2, a6, a7, a8, a9, a10;


 double d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, dreal;
 
 FILE *inptr;
 FILE *myfile; 
 
 inptr=fopen ("DISTANCE.DAT","r"); 
 fscanf(inptr,"%i %i %i %i %i %i %i",&iv1,&t1,&a1, &a2, &a3, &a4, &a5); 
 fscanf(inptr,"%i %i %i %i %i %i %i",&iv2,&t2, &a6, &a7, &a8, &a9, &a10 );

 fclose(inptr); 

	if(n == 0)
		dreal = 
 
 	dreal =  (ivreal*treal) +  (.5 * (double)areal * pow((double)treal,2));




myfile = fopen("DISTANCE.OUT","w");  
fprintf(myfile,"Car under constant accleceration\n\nInital\nvelocity   time    acceleration     distance\n_________  _____   _____________    ________\n%i  %10i %11i       %13.3lf\n%27i %18lf\n%27i %18lf\n%27i %18lf\n%27i %18lf\n%i  %10i %11i      %15.3lf\n%27i %18lf\n%27i %18lf\n%27i %18lf\n%27i %18lf\n",iv1,t1,a1,d1,a2,d2,a3,d3,a4,d4,a5,d5,iv2,t2,a6,d6,a7,d7,a8,d8,a9,d9,a10,d10);  

fclose(myfile);



 
 return 0;
}


