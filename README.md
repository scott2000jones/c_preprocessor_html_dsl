# C Preprocessor HTML DSL
A simple domain-specific language (DSL) for writing HTML in C/C++, implemented using the C preprocessor (macros).

Example:
```
printf(
    DOCTYPE("html")
    TAG("html",
        TAG("header",
            BASE("www.google.com", "_blank")
            META(, "refresh", "30", )
        )
        TAG("body", 
            TAG("div", 
                A_HREF("www.google.com", 
                    TAG("p", "lorem ipsum lorem ipsum")
                )
            )
            IMG("icon.png", "a really cool icon")
            UNARY_TAG("br")
        )
    )
);
```