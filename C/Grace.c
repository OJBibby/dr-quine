#include <stdio.h>
#define STRING(a) #a
#define EXP(a) STRING(a)
#define MAIN(a) int main() {fprintf(fopen("Grace_kid.c", "w+"), "#include <stdio.h>\n#define STRING(a) #a\n#define EXP(a) STRING(a)\n#define MAIN(a) %s\nMAIN(EXP(MAIN(a)))\n/*\n    This program will print its own source when run.\n*/\n", a);}
MAIN(EXP(MAIN(a)))
/*
    This program will print its own source when run.
*/
