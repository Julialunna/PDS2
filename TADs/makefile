
CC = g++
CFLAGS = -std=c++11 -Wall
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

all: main

${BUILD_DIR}/Onibus.o: ${INCLUDE_DIR}/Onibus.hpp ${SRC_DIR}/Onibus.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/Onibus.cpp -o ${BUILD_DIR}/Onibus.o

${BUILD_DIR}/Empresa.o: ${INCLUDE_DIR}/Onibus.hpp ${INCLUDE_DIR}/Empresa.hpp ${SRC_DIR}/Empresa.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/Empresa.cpp -o ${BUILD_DIR}/Empresa.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Onibus.hpp ${INCLUDE_DIR}/Empresa.hpp ${SRC_DIR}/main.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

main: ${BUILD_DIR}/main.o ${BUILD_DIR}/Onibus.o ${BUILD_DIR}/Empresa.o
	$(CC) $(CFLAGS) ${BUILD_DIR}/main.o ${BUILD_DIR}/Onibus.o ${BUILD_DIR}/Empresa.o -o main

clean:
	rm -f ${BUILD_DIR}/*.o main
