 #include "solution.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Fonction de comparaison de deux tableaux de chaînes de caractères
int compareArrays(char **expected, char **actual, int size) {
  for (int i = 0; i < size; i++) {
    if (strcmp(expected[i], actual[i]) != 0) {
      return 0;
    }
  }
  return 1;
}

void testSolution() {

  // Chaine simple avec ordre complet
  char *input1 = "666, the number of the beast";
  char characters1[] = {'6', 't', 'n', 'o', 'b'};
  char *expected1[] = {"666", "the", "the", "number", "of", "beast", NULL};

  char *result1[7];
  solution(result1, 7, input1, characters1, 5);
  if (!compareArrays(expected1, result1, 7)) {
    printf("Test 1 failed\n");
  } else {
    printf("Test 1 réussi\n");
  }

  // Chaine à 1 mot
  char *input2 = "OK";
  char characters2[] = {'a', 'b', 'c', 'd', 'e'};
  char *expected2[] = {"Erreur de chaine à 1 mot", "OK", NULL};

  char *result2[3];
  solution(result2, 3, input2, characters2, 5);

  if (!compareArrays(expected2, result2, 3)) {
    printf("Test 2 failed\n");
  } else {
    printf("Test 2 réussi\n");
  }

  // Chaine vide
  char *input3 = "";
  char characters3[] = {'6', 't', 'n', 'o', 'b'};
  char *expected3[] = {"", NULL};

  char *result3[1];
  solution(result3, 1, input3, characters3, 5);

  if (!compareArrays(expected3, result3, 1)) {
    printf("Test 3 failed\n");
  } else {
    printf("Test 3 réussi\n");
  }

  // Chaine donnée en exemple
  char *input4 = "Il fait beau aujourd'hui comme en aout";
  char characters4[] = {'f', 'I', 'z', 'u', 'k', 'a', 'b', 'o'};
  char *expected4[] = {"fait", "Il",    "aujourd", "aout", "beau",
                       "hui",  "comme", "en",      NULL};

  char *result4[8];
  solution(result4, 8, input4, characters4, 8);

  if (!compareArrays(expected4, result4, 8)) {
    printf("Test 4 failed\n");
  } else {
    printf("Test 4 réussi\n");
  }

  // Test spécifique N°1
  char *input5 = "Prune Orange";
  char characters5[] = {'O', 'P'};
  char *expected5[] = {"Orange", "Prune", NULL};
  char *result5[2];
  solution(result5, 2, input5, characters5, 2);

  if (!compareArrays(expected5, result5, 2)) {
    printf("Test 5 failed\n");
  } else {
    printf("Test 5 réussi\n");
  }

  // Test spécifique N°2
  char *input6 = "Prune orange";
  char characters6[] = {'O', 'p'};
  char *expected6[] = {"orange", "Prune", NULL};

  char *result6[2];
  solution(result6, 2, input6, characters6, 2);

  if (!compareArrays(expected6, result6, 2)) {
    printf("Test 6 failed\n");
  } else {
    printf("Test 6 réussi\n");
  }

  // Test spécifique N°3
  char *input7 = "Prune 0range";
  char characters7[] = {'0', 'P'};
  char *expected7[] = {"0range", "Prune", NULL};

  char *result7[2];
  solution(result7, 2, input7, characters7, 2);

  if (!compareArrays(expected7, result7, 2)) {
    printf("Test 7 failed\n");
  } else {
    printf("Test 7 réussi\n");
  }

  // Test spécifique N°4
  char *input8 = "Orange Poire Ananas Gruyere Citron Cerise ~#| Prune Pomme";
  char characters8[] = {'A', 'C', 'R', 'O', 'P'};
  char *expected8[] = {"Ananas", "Citron", "Cerise",  "Orange", "Prune",
                       "Pomme",  "Poire",  "Gruyere", NULL};

  char *result8[8];
  solution(result8, 8, input8, characters8, 5);

  if (!compareArrays(expected8, result8, 8)) {
    printf("Test 8 failed\n");
  } else {
    printf("Test 8 réussi\n");
  }
}

void testClassement() {

  char *input1 = "inputters arcs spier forgot permillage recurred "
                 "deconsecrating oxalates tiffanies dooming";
  char characters1[] = {'i', 't', 'n', 'o', 'b'};
  char *result1[10];

  clock_t start = clock();
  solution(result1, 10, input1, characters1, 5);
  clock_t end = clock();

  // Calcule le temps écoulé en secondes
  double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

  printf("Temps écoulé pour 10 : %f secondes\n", elapsed_time);

  char *input2 = "inputters arcs spier forgot permillage recurred "
                 "deconsecrating oxalates tiffanies dooming";
  char characters2[] = {'i', 't', 'n', 'o', 'b'};
  char *result2[100];

  clock_t start2 = clock();
  solution(result2, 100, input2, characters2, 5);
  clock_t end2 = clock();

  // Calcule le temps écoulé en secondes
  double elapsed_time2 = (double)(end2 - start2) / CLOCKS_PER_SEC;

  printf("Temps écoulé pour 100 : %f secondes\n", elapsed_time2);

}

int main() {
  testClassement();
  return 0;
}

