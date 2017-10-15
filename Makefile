CC=g++
CFLAGS=-Wall -std=c++14
DEBUGFLAGS=-g -Og

EXEC=janela
MAIN_FILE :=$main.cpp
HEADERS_DIR :=$ *.h
SOURCE_FILES :=$ *.cpp

TEST_EXEC=window_test
TEST_SOURCE_FILES :=$(wildcard $(TEST_DIR)/*.cpp)
TEST_LIB=-lgtest -pthread

.PHONY:make debug test clean

.PHONY:make
make:
	$(CC) -O3 -o $(EXEC) $(SOURCE_FILES) $(CFLAGS) $(HEADERS_DIR)

test:
	$(CC) -o $(TEST_EXEC) $(SOURCE_FILES) $(TEST_SOURCE_FILES) $(CFLAGS) $(DEBUGFLAGS) $(TEST_LIB) $(HEADERS_DIR)
	./$(TEST_EXEC) $(TEST_FLAGS)
