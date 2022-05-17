#include <stdio.h>

int main(int argc, char* argv[])
{

    int i;
    //         0     1     2     3
    // ./lecture timmy kimmy jimmy
    for (i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    while (--argc > 0)
        printf("%s\n", *++argv);


    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);

        int c; //stores the char
        c = argv[i][0]; //look at the 1st index of each word

        switch (c)
        {
        case 'h':
            printf("Case H!\n");
            break;
        case 'w':
            printf("Case W!\n");
            break;
        default:
            printf("illegal value %c", c);
            argc = 0; //if invalid data then quit loop
            break;
        }

        return 0;
    }
}