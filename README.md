# C Preprocessor HTML DSL
A simple domain-specific language (DSL) for writing HTML in C/C++, implemented using the C preprocessor (macros).

Example code:
```
printf(
    DOCTYPE("html")
    TAG("html",
        TAG("header",
            BASE("https://www.google.com", "_blank")
            META(, "refresh", "30", )
        )
        TAG("body", 
            TAG("div", 
                A_HREF("https://www.google.com", 
                    TAG("p", "lorem ipsum lorem ipsum")
                )
            )
            IMG("icon.png", "a really cool icon")
            UNARY_TAG("br")
        )
    )
);
```
Example output:
```
<!DOCTYPE html>
<html>
<header>
<base href="https://www.google.com" target="_blank" >
<meta name="" http_equiv="refresh" content="30" charset="" >
</header>
<body>
<div>
<a href="https://www.google.com">
<p>
lorem ipsum lorem ipsum
</p>
</a>
</div>
<img src="icon.png" alt="a really cool icon" />
<br />
</body>
</html>
```