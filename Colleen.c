/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibby <obibby@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:57:51 by obibby            #+#    #+#             */
/*   Updated: 2025/01/13 18:28:08 by obibby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void blah()
{
    printf("");
}

int main()
{
    char *a[] = {
    "/* ************************************************************************** */"
    "/*                                                                            */"
    "/*                                                        :::      ::::::::   */"
    "/*   Colleen.c                                          :+:      :+:    :+:   */"
    "/*                                                    +:+ +:+         +:+     */"
    "/*   By: obibby <obibby@student.42wolfsburg.de>     +#+  +:+       +#+        */"
    "/*                                                +#+#+#+#+#+   +#+           */"
    "/*   Created: 2025/01/13 17:57:51 by obibby            #+#    #+#             */"
    "/*   Updated: 2025/01/13 18:08:17 by obibby           ###   ########.fr       */"
    "/*                                                                            */"
    "/* ************************************************************************** */"

    "void blah()\n"
    "{\n"
    "   printf(\"\");"
    "}\n"
    "int main()\n"
    "   char *a[] = {\n",
    };
    char *b[] = {"\\"};
    // This is another comment
    blah();
}