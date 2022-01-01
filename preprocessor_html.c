#include <stdio.h>

#define Tag(name, child_tags) "<"name">\n"child_tags"</"name">\n"

int main() {
    printf("Hello from the C preprocessor world\n");
    printf("%s\n", Tag("html",
        Tag("header",
            Tag("title",)
        )
        Tag("body",)
    ));
    return 0;
}