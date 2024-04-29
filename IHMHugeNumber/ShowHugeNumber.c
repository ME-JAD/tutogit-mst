#include "ShowHugeNumber.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_OF_EXPONENT_MARKUP 2
#define EXPONENT_MARKUP " E"


void printHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt) {
    char* hugeUnsignedIntString = HugeUnsignedIntToString (hugeUnsignedInt);
    printf ("%s\n", hugeUnsignedIntString);
    free (hugeUnsignedIntString);
}
