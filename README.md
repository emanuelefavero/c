# C

This is a test repository for the C programming language where you can test your C code. It also contains many examples of C code features

## Run C code in this repository

You can use `main.c` to write your C code

### How to run C code

There are various ways to run C code in this repository. To find out how to install the necessary tools, please refer to the [Resources](#resources) section.

### cpace - development environment (auto compile and run)

```bash
cpace main.c
```

### gcc - compiler

```bash
gcc main.c -o main
```

> Tip: Rename `main` in `-o main` to any name you want

- Run the compiled code:

```bash
./main
```

> Note: You could also use `clang` instead of `gcc` to compile C code

### Docker

To run the code in a Docker container, you can use the following commands:

```bash
docker build -t c-program .
docker run c-program
```

> Note: you need to install Docker on your machine to run the code in a Docker container. The `Dockerfile` is already in the repository
>
> Note: Running the code in a Docker container could be really useful when running not safe c code
>
> Note: If you change the content of the `main.c` file, you need to rebuild the Docker image

## Resources

- [cpace](https://github.com/oleshkooo/npm-cpace)
- GCC - Mac: `brew install gcc`
- GCC - Linux: `sudo apt-get install gcc`
- [GCC - Windows](https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j)
- [Clang](https://clang.llvm.org/get_started.html)
- [Docker](https://docs.docker.com/get-docker/)

> Note: You need to already have `gcc` and `node.js` installed on your machine to install and use `cpace`
