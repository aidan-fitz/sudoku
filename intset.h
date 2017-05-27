#include <inttypes.h>

/**
 * A bit vector implementation of a subset of {0..15}.
 * Use bitwise operations for union, intersection, complement, and set/symmetric difference.
 */
typedef uint16_t intset;

/**
 * Returns {n}.
 * Requires: 0 <= n < 16.
 */
intset singleton(uint8_t n);
