// problem name: Petya and Strings
// problem link: https://codeforces.com/problemset/problem/112/A
// status: accepted

// auother: https://github.com/HamzaYehia


#include<stdio.h>
#include<string.h>
 
int main(void) {
 
   char first[101], second[101];
   scanf("%s", first);
   scanf("%s", second);
 
   /* convert the two inputs to lowercase using ascii code,
      you can do the same with 'tolower()' function */

   for (int i = 0; i < strlen(first) && i < strlen(second); i++)
   {
	   if (first[i] >= 65 && first[i] <= 90) { first[i]+= 32; }

           if (second[i] >= 65 && second[i] <= 90) { second[i]+= 32; }
   }
   
    /*  compare each character of both inputs at the same indices,
        comparing characters is done using ascii code */

   for(int i = 0; i < strlen(first) && i < strlen(second); i++)
   {
           if (first[i] > second[i])
           {
		   printf("%d\n", 1);
		   return 0;
	   }
 	   else if (first[i] < second[i])
	   {
		   printf("%d\n", -1);
		   return 0;
           }
   }
   printf("%d\n", 0);
   return 0;
}

