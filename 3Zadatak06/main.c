/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"


int main(void)
{
    helper_library_init();

    int r;
    int i;
    int broj;
    int s = 0;

    print("Unesite pozitivan broj: ");
    scan("%d", &broj);

    for(i = broj; i > 0; )
    {
        r = i % 10;
        s = s * 10 + r;
        i = i / 10;
    }

    print((s == broj) ? "Broj je palindrom.\n" : "Broj nije palindrom.\n");

    return 0;
}
