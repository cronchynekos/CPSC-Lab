//Nathanael Kim CPSC 223 section 1
#include <stdio.h>

#define MAXLINE 1000
char pattern[] = "and"; //term to search for

int getline2(char s[], int lim)
{
    int c, i; //c is char , i is the counters
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n'; ++i)
    {
        s[i] = c;//write char to s
        //input - hello\n
        //s[] = hello\0
    }
    s[i] = '\0'; //append the null terminator
    return i;   //return the size
}

int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) //search the array and keeps our place!
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)//j searches where we are starting with i in s, k searches t
            ; //search for a match!!!
        if (k > 0 && t[k] == '\0') //if we found a match
            return i;
    }

    return -1;

}
int main()
{
    char line[MAXLINE];
    FILE* fpointer = fopen("search.txt", "w");
    while (getline2(line, MAXLINE) > 0) //keep reading lines until empty line is entered
    {
        if (strindex(line, pattern) >= 0) {
            fprintf(fpointer, "%s\n", line);
        }
    }
    fclose(fpointer);
    return 0;
}






    