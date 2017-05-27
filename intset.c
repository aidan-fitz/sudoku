#include "intset.h"

intset singleton(uint8_t n) {
    return 1 << n;
}