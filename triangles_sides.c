#include <stdio.h>
#include <stdlib.h>

int main () {
    int s1, s2, s3;
    printf ("Type side 1:\n");
    scanf ("%i" , &s1);
    printf ("Type side 2:\n");
    scanf ("%i" , &s2);
    printf ("Type side 3:\n");
    scanf ("%i" , &s3);

    if (s1 == s2 && s1 == s3){
        printf ("equilateral");
    } else if (s1 == s2 || s1 == s3 || s2 == s3){
        printf ("isosceles");
    }else {
        printf ("scalene");
    }




    return 0;


}
