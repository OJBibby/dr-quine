#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int	main()
{
	char str[10] = "Sully_X.c";
	int i = 5;
	i -= 1;
	if (i < 0) return (0);
	str[6] = i + '0';
	FILE *file = fopen(str, "w+");
	char *source = "#include <stdio.h>%c#include <unistd.h>%c#include <sys/wait.h>%c%cint	main()%c{%c	char str[10] = %cSully_X.c%c;%c	int i = %d;%c	i -= 1;%c	if (i < 0) return (0);%c	str[6] = i + '0';%c	FILE *file = fopen(str, %cw+%c);%c	char *source = %c%s%c;%c	fprintf(file, source, 10, 10, 10, 10, 10, 10, 34, 34, 10, i, 10, 10, 10, 10, 34, 34, 10, 34, source, 34, 10, 10, 10, 10, 10, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10);%c	fclose(file);%c	pid_t pid = fork();%c	if (pid == 0)%c		execv(%c/usr/bin/gcc%c, (char *[]){%cgcc%c, str, %c-o%c, %cSully%c, NULL});%c	else if (pid > 0) {%c		wait(NULL);%c		execv(%c./Sully%c, (char *[]){%c./Sully%c, NULL});%c	}%c}%c";
	fprintf(file, source, 10, 10, 10, 10, 10, 10, 34, 34, 10, i, 10, 10, 10, 10, 34, 34, 10, 34, source, 34, 10, 10, 10, 10, 10, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10);
	fclose(file);
	pid_t pid = fork();
	if (pid == 0)
		execv("/usr/bin/gcc", (char *[]){"gcc", str, "-o", "Sully", NULL});
	else if (pid > 0) {
		wait(NULL);
		execv("./Sully", (char *[]){"./Sully", NULL});
	}
}
