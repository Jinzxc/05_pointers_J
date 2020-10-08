#include <stdio.h>

int main() 
{
    // Part 1
    char a = 1;
    int b = 1;
    long c = 1;

    // Part 2
    // c is 7 bytes below b
    // b is 12 bytes below a
    printf("&a: %p, %ul\n", &a, &a);
    printf("&b: %p, %ul\n", &b, &b);
    printf("&c: %p, %ul\n\n", &c, &c);

    // Part 3
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    // Part 4
    printf("ap: %p\n", ap);
    printf("bp: %p\n", bp);
    printf("cp: %p\n\n", cp);

    // Part 5
    *ap = 2;
    *bp = 2;
    *cp = 2;

    printf("a: %d\nb: %d\nc: %ld\n\n", a, b, c);

    // Part 6
    unsigned int d = 100;
    int *ipd = &d;
    char *cpd = &d;

    // Part 7
    printf("ipd: %p ipd points to: %d\n", ipd, *ipd);
    printf("cpd: %p cpd points to: %d\n\n", cpd, *cpd);

    // Part 8
    printf("d: %x, %u\n\n", d, d);

    // Part 9
    int i;
    for(i = 0; i < 4; i++) {
        printf("d[%d]: %hhu, %hhx\n", i, cpd[i], cpd[i]);
    }

    printf("\n");

    // Part 10
    for(i = 0; i < 4; i++) {
        cpd[i] += 1;
        printf("d(%d): %x, %u\n", i, d, d);
    }

    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("d[%d]: %hhu, %hhx\n", i, cpd[i], cpd[i]);
    }

    printf("\n");

    // Part 11
    for(i = 0; i < 4; i++) {
        cpd[i] += 16;
        printf("d(%d): %x, %u\n", i, d, d);
    }

    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("d[%d]: %hhu, %hhx\n", i, cpd[i], cpd[i]);
    }

    return 0;
}