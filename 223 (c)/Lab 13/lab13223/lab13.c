#include <stdio.h>
#define forever for(;;)
#define max(A, B) ((A) > (B) ? (A) : (B))
#define max(A, B) ((A) > (B) ? (A) : (B))

#define square(x) (x)*(x)
#define MAKESTRING(X) #X //convert a variable name to a string
#define dprint(expr) printf(#expr "= %d\n", expr)
#define paste(front, back) front##back
#define multiLine(x) \
{ \
  x++; \
  x++; \
  printf("%d\n", x); \
}
#define min(A, B) ((A) < (B) ? (A) : (B))
#define findy(m,x,b) (m)*(x)+(b)
#define swap(t,x,y) \
{ \
(t = x); \
(x = y); \
(y = t); \
printf("%d\n%d", b, ab); \
}

// backslash \ allows for multiline macros!

int main()
{

    int a = 2;
    int b = 0;
    int ab = 3;


    //multiLine(a);
    int answer = findy(a+1, b+1, ab);
    printf("%d\n\n\n", answer);
    swap(a, b, ab);
    

    //printf("%d\n", paste(a,b));//printf("%d\n", ab);
    /*
    ((A) > (B) ? (A) : (B))

    if(A > B)
    return a
    else
    return b

    */
    //dprint(a + b); //printf("a + b = %d\n", expr);

    //printf("%s = %d\n", MAKESTRING(b), b);

    /*
    #undef square
    #ifdef square
    x = square(b + 1);
    #endif
    */
    //b + 1*b + 1
    //3 + 1*3 + 1
    //3 + 3 + 1
    //7
    //printf("%d\n", x);
    /*
    printf("%d %d %d\n", a, b, x);
    x = max(a++, b++);
    //max(a+a, b+b) = ((a+a) > (b+b) ? (a+a) : (b+b))
    //max(a++,b++) = ((a++ > b++) ? (a++) : (b++)  //7 4
    printf("%d\n", x);
    printf("%d %d %d\n", a, b, x); //7 4 6
    */
    /*
    char in[10];

    forever //for(;;)
    {
      scanf("%s", in);
      printf("%s\n", in);
    }
  */

    return 0;
}