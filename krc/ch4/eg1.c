#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getlne(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould";
/* pattern to search for */
/* find all lines matching pattern */
main()
{
char line[MAXLINE];
int found = 0;
while (getlne(line, MAXLINE) > 0)
if (strindex(line, pattern) >= 0) {
printf("%s %d", line,strindex(line,pattern));
found++;
}
return found;
}
/* getline: get line into s, return length */
int getlne(char s[], int lim)
{
int c, i;
i = 0;
while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
s[i++] = c;
if (c == '\n')
s[i++] = c;
s[i] = '\0';
return i;
}
/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
int i, j, k;
for (i = 0; s[i] != '\0'; i++) {
for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)61
;
if (k > 0 && t[k] == '\0')
return j--;
}
return -1;
}
