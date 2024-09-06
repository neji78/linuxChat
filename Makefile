# this is a makefile for linux chat project
CXX = g++
# objects := signUp.o main.o

FINAL_FILE := chat
BUILD_DIR := ./build
objects := $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(wildcard *.cpp))

$(BUILD_DIR)/%.o : %.cpp %.h
	$(CXX) -c $< 

all: 
	@echo please specify target

build: $(objects) final

$(objects) : | $(BUILD_DIR)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

final:
	@$(CXX) $(objects) -o $(FINAL_FILE)

clean:
	@rm -rf *.o $(FINAL_FILE)