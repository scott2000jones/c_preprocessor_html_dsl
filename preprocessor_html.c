#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Tag(name, child_tags) "<" name ">\n" child_tags "</" name ">\n"
#define A_Tag(href, child_tags) "<a href=\"" href "\">\n" child_tags "</a>\n"
#define Img_Tag(src, alt_text, child_tags) "<img src=\"" href "\" alt=\"" alt_text "\">\n" child_tags "</img>\n"
#define Link_Tag(rel, href) "<link rel=\"" rel "\" href=\"" href "\" />\n"
#define Unary_Tag(name) "<" name " />\n"
#define Doctype(type) "<!DOCTYPE " type ">\n"

int main() {
    printf("Hello from the C preprocessor world\n");

    char * forloop = calloc(1, 256);
    for (int i = 0; i < 2; i++) {
        strcat(forloop, Tag("p", "generated_item\n"));
    }

    printf(
        Doctype("html")
        Tag("html",
        Tag("header",)
        Tag("body", 
            "%s"
            Tag("div", 
                A_Tag("www.google.com", 
                    Tag("p", "elp elp elp")
                )
            )
        )
    ), forloop);

    free(forloop);
    return 0;
}