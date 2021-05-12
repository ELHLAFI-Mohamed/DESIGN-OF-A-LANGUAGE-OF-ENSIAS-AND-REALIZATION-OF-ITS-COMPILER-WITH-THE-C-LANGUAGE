#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.h"
#include "syntax.h"

int main(int argc, const char * argv[]) {
  int a;
  /* ouverture de fichier à tester */
  openfile("test.txt");
  /* analyse lexicale */
  a=analyse_lexicale();
  /* analyse_syntaxique */
  if (a==0)
  analyse_syntaxique();
  return 0;
}
