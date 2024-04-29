#include <stdio.h>
#include "DataTypes/DoublyLinkedList.h"
#include "UseHugeNumber/Type/HugeUnsignedInt.h"
#include "IHMHugeNumber/ShowHugeNumber.h"

int main (void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString
            ("123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString
            ("0000000123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
}
