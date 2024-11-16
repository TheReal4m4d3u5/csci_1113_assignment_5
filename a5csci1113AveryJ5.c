/* Lesson for 3_6 */

#include <stdio.h>

int main(void)
{
 double xx ;
 int   ii, kk; 
 FILE *inptr;
 
 inptr=fopen ("RANDOM.DATA","r"); 
 fscanf(inptr,"%d",&ii); 

 fclose(inptr); 
 
 FILE *myfile; 
 
 myfile = fopen("RANDOM.OUT","w");  
 fprintf(myfile,"Week=%5d\n", ii);  
 fclose(myfile);
 
 return 0;

}



