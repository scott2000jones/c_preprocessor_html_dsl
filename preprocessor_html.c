#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAG(name, child_tags) "<" name ">\n" child_tags "</" name ">\n"
#define A_HREF(href, child_tags) "<a href=\"" href "\">\n" child_tags "</a>\n"
#define IMG(src, alt_text, child_tags) "<img src=\"" href "\" alt=\"" alt_text "\">\n" child_tags "</img>\n"
#define LINK(rel, href) "<link rel=\"" rel "\" href=\"" href "\" />\n"
#define UNARY_TAG(name) "<" name " />\n"
#define DOCTYPE(type) "<!DOCTYPE " type ">\n"
#define META(name, http_equiv, content, charset) "<meta name=\"" name "\" http_equiv=\"" http_equiv "\" content=\"" content "\" charset=\"" charset"\" >\n"
#define BASE(href, target) "<base href=\"" href "\" target=\"" target "\" >\n"


int main() {
    printf("Hello from the C preprocessor world\n");

    char * forloop = calloc(1, 256);
    for (int i = 0; i < 2; i++) {
        strcat(forloop, TAG("p", "generated_item\n"));
    }

    printf(
        DOCTYPE("html")
        TAG("html",
            TAG("header",
                BASE("www.google.com", "_blank")
                META(, "refresh", "30", )
            )
            TAG("body", 
                "%s"
                TAG("div", 
                    A_HREF("www.google.com", 
                        TAG("p", "elp elp elp")
                    )
                )
            )
        ), 
        forloop);

    free(forloop);
    return 0;
}