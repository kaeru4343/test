/* file : repro.c */
/* author : kenichi furusawa */ 
/* date : 7-9-2016 */
/* version: 1.0 */
/* Description:a program that compute a program that computes how many packs of paper are needed for printing the readers. */

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main(int argc, char *argv[]) {
int x;
scanf("%d", &x);
//hello 
if (x%500==0){
	printf ("%d\n",x/500);
}else{ 
	printf("%d\n",x/500+1);
}
return 0;
}
