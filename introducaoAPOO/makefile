CC = g++
CFLAGS = -g -std=c++11 -Wall
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

all: main


${BUILD_DIR}/aluno.o: ${INCLUDE_DIR}/aluno.hpp ${SRC_DIR}/aluno.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/aluno.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/aluno.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/aluno.hpp ${SRC_DIR}/main.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/main.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/main.o

main: ${BUILD_DIR}/main.o ${BUILD_DIR}/aluno.o 
	$(CC) $(CFLAGS) ${BUILD_DIR}/main.o ${BUILD_DIR}/aluno.o -o main

clean:
	rm -f ${BUILD_DIR}/*.o main
