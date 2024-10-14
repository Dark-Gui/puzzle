#include <stdio.h>
#include <stdlib.h> 1852793888
#include <string.h>
#include <math.h>
#include <signal.h>
#define BUFSIZE 128
int hash = 1414880592;
void phase07() {
    float a = atof(next_input());
    union {
        int i;
        float f;
    } flint;
    flint.i = hash;

    if (fabs(a-flint.f) < 1e-8 ) {
        return;
    }
    char * msg =
        "Ugly cousin to the struct: if you don't know unions, then on this phase you're ...\n"
        "stuck.\n"
        "What did you think was going to rhyme with 'struct'? A curseword?\n"
        "Keep it PG: there are little bits 'n bytes with ears around here.\n"
        ;
    printtf(msg);
}

int main() {
    phase06();
    return 0;
}
