#include <hidef.h>
#include "derivative.h"
#include "battleship_feedback.h"

#define SW5_MASK 0x01u

/* Short delay, avoid reading a button press several times. */
static void debounce(void)
{
    volatile unsigned short i;

    for (i = 0; i < 30000u; i++) {
        _FEED_COP();
    }
}
