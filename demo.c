#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "preprocessor_html.h"

int main(void) {
    char *generated_tags = calloc(1, 256);
    for (int i = 0; i < 2; i++) {
        strcat(generated_tags, TAG("li", "generated_item\n"));
    }

    printf(
        DOCTYPE("html")
        TAG("html",
            TAG("header",
                BASE("https://www.google.com", "_blank")
                META(, "refresh", "30", )
            )
            TAG("body", 
                TAG("ul", "%s")
                TAG("div", 
                    A_HREF("https://www.google.com", 
                        TAG("p", "lorem ipsum lorem ipsum\n")
                    )
                )
                IMG("icon.png", "a really cool icon")
                UNARY_TAG("br")
            )
        ), 
        generated_tags);

    free(generated_tags);

    return 0;
}