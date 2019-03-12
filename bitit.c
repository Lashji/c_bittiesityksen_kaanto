#include "bitit.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


void kaannaScharBitit(signed char *x) {
    int i = 0;
    signed char eka = 0;
    signed char toka= 0;

    for (i = 0; i < CHAR_BIT; i++) {
        if (i >= CHAR_BIT / 2) {
            break;
        }

        eka = (*x >> i) & 1;
        toka = (*x >> ((CHAR_BIT - 1) - i)) & 1;

        if (eka == 1) {
            *x = *x | (1 << ((CHAR_BIT - 1) - i));

        } else {
            *x = *x & ~(1 << ((CHAR_BIT - 1) - i));

        }

        if (toka == 1) {
            *x = *x | (1 << i);
        } else {
            *x = *x & ~(1 << i);
        }

    }
}

void kaannaShortBitit(short *x) {
    int i = 0;
    short koko = sizeof(short) * CHAR_BIT;
    short eka = 0;
    short toka = 0;
    for (i = 0; i < koko; i++) {
        if (i >= koko / 2) {
            break;
        }
        eka = (*x >> i) & 1;
        toka = (*x >> ((koko - 1) - i)) & 1;

        if (eka == 1) {
            *x = *x | (1 << ((koko - 1) - i));

        } else {
            *x = *x & ~(1 << ((koko - 1) - i));

        }

        if (toka == 1) {
            *x = *x | (1 << i);
        } else {
            *x = *x & ~(1 << i);
        }

    }
}


void kaannaIntBitit(int *x) {
    int i = 0;
    int koko = sizeof(int) * CHAR_BIT;
    int eka = 0;
    int toka = 0;
    for (i = 0; i < koko; i++) {
        if (i >= koko / 2) {
            break;
        }

        eka = (*x >> i) & 1;
        toka = (*x >> ((koko - 1) - i)) & 1;

        if (eka == 1) {
            *x = *x | (1 << ((koko - 1) - i));

        } else {
            *x = *x & ~(1 << ((koko - 1) - i));

        }

        if (toka == 1) {
            *x = *x | (1 << i);
        } else {
            *x = *x & ~(1 << i);
        }
    }
}

void kaannaLongBitit(long *x) {
    int i = 0;
    long koko = sizeof(long) * CHAR_BIT;
    long eka = 0;
    long toka = 0;
    for (i = 0; i < koko; i++) {
        if (i >= koko / 2) {
            break;
        }
        eka = (*x >> i) & 1;
        toka = (*x >> ((koko - 1) - i)) & 1;

        if (eka == 1) {
            *x = *x | (1L << ((koko - 1) - i));

        } else {
            *x = *x & ~(1L << ((koko - 1) - i));

        }

        if (toka == 1) {
            *x = *x | (1L << i);
        } else {
            *x = *x & ~(1L << i);
        }
    }
}


