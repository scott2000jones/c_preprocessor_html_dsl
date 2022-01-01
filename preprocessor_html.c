#include <stdio.h>


#define Tag(name, block) printf("<%s>\n", name); block printf("</%s>\n", name);

/* Taken from https://stackoverflow.com/a/32665978 */
#define SCHEMA "test"
#define TABLE  "data"

const char *table = SCHEMA "." TABLE ; // note no + or . or anything
const char *qry =               // include comments in a string
    " SELECT *"                // get all fields
    " FROM " SCHEMA "." TABLE   /* the table */
    " WHERE x = 1 "             /* the filter */ 
                ;
/* End */

int main() {
    printf("Hello from the C preprocessor world\n");
    Tag("html", {
        Tag("header", {
            Tag("title",)
        })
        Tag("body",)
    });
    printf("%s\n", qry);
    return 0;
}