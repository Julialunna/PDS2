CC = g++
CFLAGS = -g -std=c++11 -Wall
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

all: main

${BUILD_DIR}/Generico.o: ${INCLUDE_DIR}/Generico.hpp ${SRC_DIR}/Generico.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/Generico.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/Generico.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Generico.hpp ${SRC_DIR}/main.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/main.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/main.o

main: ${BUILD_DIR}/main.o ${BUILD_DIR}/Generico.o 
	$(CC) $(CFLAGS) ${BUILD_DIR}/main.o ${BUILD_DIR}/Generico.o -o main

clean:
	rm -f ${BUILD_DIR}/*.o main