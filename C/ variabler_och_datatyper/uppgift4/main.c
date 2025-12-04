#include <stdio.h>
#include <limits.h>
#include <float.h>

void main() {
    printf("%-8s %-25d %-25d\n", "char", SCHAR_MIN, SCHAR_MAX);
    printf("%-8s %-25d %-25d\n", "uchar", 0, UCHAR_MAX);

    printf("%-8s %-25d %-25d\n", "short", SHRT_MIN, SHRT_MAX);
    printf("%-8s %-25d %-25u\n", "ushort", 0, USHRT_MAX);

    printf("%-8s %-25d %-25d\n", "int", INT_MIN, INT_MAX);
    printf("%-8s %-25d %-25u\n", "uint", 0, UINT_MAX);

    printf("%-8s %-25ld %-25ld\n", "long", LONG_MIN, LONG_MAX);
    printf("%-8s %-25d %-25lu\n", "ulong", 0, ULONG_MAX);

    printf("%-8s %-25lld %-25lld\n", "llong", LLONG_MIN, LLONG_MAX);
    printf("%-8s %-25d %-25llu\n", "ullong", 0, ULLONG_MAX);

    printf("%-8s %-25.6e %-25.6e\n", "float", FLT_MIN, FLT_MAX);

    printf("%-8s %-25.6e %-25.6e\n", "double", DBL_MIN, DBL_MAX);
}