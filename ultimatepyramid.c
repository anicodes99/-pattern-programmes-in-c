#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++){  //here we have done the part of increase of stars from 1 to 5
	   	for(k=1;k<=5-i;k++){  //here we have done the part of spaces 
	   		printf(" ");
		   }
	   	for(j=1;j<=i;j++){    //here we have done that part of increasing printing stars
	   		printf(" *");
		   }
		   printf("\n");
	   }
	   
	   for(i=5;i>=1;i--){  //here we have done that decrease of stars from 1 to 5
	   	for(k=1;k<=5-i;k++){//here we have done the part of spaces
	   		printf(" ");
		   }
		   
	   	for(j=1;j<=i;j++){ //here we have done that part of decreasinfg stars
	   		printf(" *");
		   }
		   printf("\n");
	   }
	   return 0;
}


