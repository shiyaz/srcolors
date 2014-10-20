#include <stdio.h>
#include <stdlib.h>
#include "srcolors.h"

int
main(int argc, char **argv)
{
    int r, g, b;
    int color;

    if (argc != 4) {
        printf("Usage: test red green blue\n");
        return 0;
    }

    r = atoi(argv[1]);
    g = atoi(argv[2]);
    b = atoi(argv[3]);

    color = nearest_color(r, g, b);

    printf("RGB(%d, %d, %d) is %s which is a shade of %s\n", r, g, b,
            color_name(color), color_group(color));

    printf("Number of colors recognised: %d\n", color_count());

    return 0;
}

