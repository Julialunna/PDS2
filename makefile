CC=g++
CFLAGS=-std=c++11 -Wall
SRC_DIR=src
BUILD_DIR=build

all: main

${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
    $(CC) $(CFLAGS) -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

main: ${BUILD_DIR}/main.o
    $(CC) $(CFLAGS) ${BUILD_DIR}/main.o -o main