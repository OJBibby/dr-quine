#include <stdio.h>

/*
    This program will print its own source when run.
*/

void blah(char *str)
{
    putchar(' '); putchar(' '); putchar(' '); putchar(' ');
    putchar('\"');
    for (; *str; str++) {
        if (*str == '\n') {
            putchar('\\'); putchar('n');
        } else if (*str == '\\') {
            putchar('\\'); putchar('\\');
        } else if (*str == '\"') {
            putchar('\\'); putchar('\"');
        } else
            putchar(*str);
    }
    putchar('\"'); putchar(','); putchar('\n');
}

int main()
{
    /*
        This program will print its own source when run.
    */
    char *a[] = {
    "#include <stdio.h>\n",
    "\n",
    "/*\n",
    "    This program will print its own source when run.\n",
    "*/\n",
    "\n",
    "void blah(char *str)\n",
    "{\n",
    "    putchar(' '); putchar(' '); putchar(' '); putchar(' ');\n",
    "    putchar('\\\"');\n",
    "    for (; *str; str++) {\n",
    "        if (*str == '\\n') {\n",
    "            putchar('\\\\'); putchar('n');\n",
    "        } else if (*str == '\\\\') {\n",
    "            putchar('\\\\'); putchar('\\\\');\n",
    "        } else if (*str == '\\\"') {\n",
    "            putchar('\\\\'); putchar('\\\"');\n",
    "        } else\n",
    "            putchar(*str);\n",
    "    }\n",
    "    putchar('\\\"'); putchar(','); putchar('\\n');\n",
    "}\n",
    "\n",
    "int main()\n",
    "{\n",
    "    /*\n",
    "        This program will print its own source when run.\n",
    "    */\n",
    "    char *a[] = {\n",
    NULL
    };
    char *b[] = {
    "    };\n",
    "    char *b[] = {\n",
    "    }, **x;\n",
    "    for (x = a; *x; x++) {\n",
    "        printf(\"%s\", *x);\n",
    "    };\n",
    "    for (x = a; *x; x++) {\n",
    "        blah(*x);\n",
    "    };\n",
    "    printf(\"    NULL\\n\");\n",
    "    x = b;\n",
    "    printf(\"%s\", *x);\n",
    "    x++;\n",
    "    printf(\"%s\", *x);\n",
    "    x++;\n",
    "    for (x = b; *x; x++) {\n",
    "        blah(*x);\n",
    "    };\n",
    "    printf(\"    NULL\\n\");\n",
    "    x = b;\n",
    "    x++;\n",
    "    x++;\n",
    "    for (; *x; x++) {\n",
    "        printf(\"%s\", *x);\n",
    "    };\n",
    "}\n",
    NULL
    }, **x;
    for (x = a; *x; x++) {
        printf("%s", *x);
    };
    for (x = a; *x; x++) {
        blah(*x);
    };
    printf("    NULL\n");
    x = b;
    printf("%s", *x);
    x++;
    printf("%s", *x);
    x++;
    for (x = b; *x; x++) {
        blah(*x);
    };
    printf("    NULL\n");
    x = b;
    x++;
    x++;
    for (; *x; x++) {
        printf("%s", *x);
    };
}
