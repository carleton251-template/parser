#include <stdio.h>
#include "tokenizer.h"
#include "object.h"
#include "linkedlist.h"
#include "parser.h"
#include "talloc.h"

/* Main for parser, by Dave Musicant
   Fairly self-explanatory. Tokenizes, parses, and prints out a parsed Racket program. */

int main() {

    Object *list = tokenize();
    Object *tree = parse(list);

    printTree(tree);
    printf("\n");

    tfree();
    return 0;
}
