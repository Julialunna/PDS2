CC = g++
CFLAGS = -std=c++11 -Wall
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

all: vpl_execution


${BUILD_DIR}/list.o: ${INCLUDE_DIR}/node.hpp ${INCLUDE_DIR}/list.hpp ${SRC_DIR}/list.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/list.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/list.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/list.hpp ${SRC_DIR}/main.cpp 
	$(CC) $(CFLAGS) -c ${SRC_DIR}/main.cpp -I$(INCLUDE_DIR) -o ${BUILD_DIR}/main.o

vpl_execution: ${BUILD_DIR}/main.o ${BUILD_DIR}/list.o 
	$(CC) $(CFLAGS) ${BUILD_DIR}/main.o ${BUILD_DIR}/list.o -o vpl_execution

clean:
	rm -f ${BUILD_DIR}/*.o main
