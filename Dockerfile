FROM gcc:latest
WORKDIR /usr/src/app
COPY main.c .
RUN gcc -o main main.c
CMD ["./main"]
