/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibby <obibby@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:57:51 by obibby            #+#    #+#             */
/*   Updated: 2025/01/14 20:29:54 by obibby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
    // This is another comment
    char *a[] = {
    "/* ************************************************************************** */\n",
    "/*                                                                            */\n",
    "/*                                                        :::      ::::::::   */\n",
    "/*   Colleen.c                                          :+:      :+:    :+:   */\n",
    "/*                                                    +:+ +:+         +:+     */\n",
    "/*   By: obibby <obibby@student.42wolfsburg.de>     +#+  +:+       +#+        */\n",
    "/*                                                +#+#+#+#+#+   +#+           */\n",
    "/*   Created: 2025/01/13 17:57:51 by obibby            #+#    #+#             */\n",
    "/*   Updated: 2025/01/13 18:08:17 by obibby           ###   ########.fr       */\n",
    "/*                                                                            */\n",
    "/* ************************************************************************** */\n",
    "\n",
    "#include <stdio.h>\n",
    "\n",
    "void blah()\n",
    "{\n",
    "   printf(\"\");",
    "}\n",
    "\n",
    "int main()\n",
    "{\n",
    "    // This is another comment\n",
    "    char *a[] = {\n",
    NULL
    };
    char *b[] = {
        "};\n"
        "char *b[] = {",
        NULL
    }, **x;
    for (x = a; *x; x++) {
        printf("%s", *x);
    }
    for (x = a; *x; x++) {
        blah(*x);
    }
    blah(*b);
}