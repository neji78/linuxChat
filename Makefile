# this is a makefile for linux chat project
CXX = g++
objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
FINAL_FILE := chat
all: 
	@echo please specify target

build: $(objects) final

%.o : %.cpp %.h
	$(CXX) -c $< -o $@

final:
	@$(CXX) $(objects) -o $(FINAL_FILE)

clean:
	@rm -rf *.o $(FINAL_FILE)