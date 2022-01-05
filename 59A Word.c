// problem name: Word
// problem link: https://codeforces.com/problemset/problem/59/A
// status: accepted

// auother: https://github.com/HamzaYehia
// CodeForces Acc: https://codeforces.com/profile/HamzaYehia


#include<stdio.h>
#include<string.h>

int main(void)
{
   char word[100];
   scanf("%s", word);
   int upper_counter = 0, lower_counter = 0;

   for (int i = 0; word[i] != '\0'; i++) {
       if (word[i] >= 65 && word[i] <= 90) {
           upper_counter++;
        }
    }
    
    lower_counter = strlen(word) - upper_counter;

   if (upper_counter > lower_counter) {
       for (int i = 0; word[i] != '\0'; i++) {
           if (word[i] >= 97 && word[i] <= 122) {
               word[i] -= 32;
           }
       }
    }
    else {
        for (int i = 0; word[i] != '\0'; i++) {
            if (word[i] >= 65 && word[i] <= 90) {
                word[i] += 32;
            }
        }
    }

    printf("%s", word);
    return 0;
}
