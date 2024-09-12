#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortierePointerAufPointer(char **arr[], int n) {
  char **temp;
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
        if (strcmp(*arr[i], *arr[j]) > 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
}
}
}
}

void textausgabe(char **textPointer[], int anz_Zeilen) {
    for (int zahl = 0; zahl < anz_Zeilen; zahl++) {
       printf("%s\n", *textPointer[zahl]);
   }
}

void main() {
    char *string1 = "Pflaume";
    char *string2 = "Apfel";
    char *string3 = "Johannisbeere";
    char **pointerArray[3] = {&string1, &string2, &string3};
    int anz_Zeilen = 3;

    printf("Vor dem Sortieren:\n");
    textausgabe(pointerArray, anz_Zeilen);

    sortierePointerAufPointer(pointerArray, anz_Zeilen);

    printf("\nNach dem Sortieren:\n");
    textausgabe(pointerArray, anz_Zeilen);*/

}
