# Learn C++

This repository contains solutions and code snippets from the [learn c++](https://www.learncpp.com/) site, specifically from chapters 4 onwards.

## How to build and run?

I'm using `clang` to compile my code, and running binary directly in terminal.
I'm using [Zed](https://zed.dev/docs/languages/cpp#build-and-debug-binary) as my code editor, and have set-up some tasks that allow me to compile, build, and debug my code.

If you aren't using Zed, you can run the following command in the root of the directory, making sure to change targets depending on the solutions you want to run.

```bash
clang++ -o main --ggdb <path-to-main.cpp> <any-other-.cpp files to compile> -std=c++23 -pedantic-errors -Werror -Wunused-variable
```

For example, for the solution in [Chapter 4, Question 2](./chapter-04/q-02/main.cpp), we can run:

```bash
clang++ -o main -ggdb chapter-04/q-02/main.cpp -std=c++23 -pedantic-errors -Werror -Wunused-variable
```

I'm not familiar with tools like `CMake` yet, so just doing this simple solution for now. In the future, I hope to make this more robust and simple.
