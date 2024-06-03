#include <stdio.h>
#include <string.h>

int main() {
   char str[2][50], temp[50];
   printf("Enter 5 words: ");

   // Getting strings input
   for (int i = 0; i < 2; ++i) {
    fgets(str[i], sizeof(str[i]), stdin);
     
   }

   // storing strings in the lexicographical order
   for (int i = 0; i < 2; ++i) {
      for (int j = i + 1; j < 2; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 2; ++i) {w
      fputs(str[i], stdout);
   }
   return 0;
}