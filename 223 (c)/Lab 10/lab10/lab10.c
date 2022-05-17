#include <stdio.h>
//
#define MAXLINE 1000 //max input line length
char pattern[] = "and"; //term to search for

int strindex(char s[], char t[]) //s input, t term
{
    int i, j, k, counter;
    counter = 0;
    for (i = 0; s[i] != '\0'; i++) //search the array and keeps our place!
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            if (k > 0 && t[k] == '\0') {
                counter++;
            }
        }
    }
    return counter;
}
int main()
{
    char line[MAXLINE];
    const char *output;
    //char current[30];
    for (int i = 0; i < 3; i++)
    {
        fgets(line, MAXLINE, stdin);
        if (i == 0) {
            output = line;
        }
        //count[i] = strindex(line, pattern);
        if (strindex(line, pattern) > strindex(&output, pattern)) {
            output = line;
        }
    }
    printf("%s", output);



    return 0;
}