# Rob's super awesome makefile assignment 2
# build an executable named sync.exe from sync.cpp
CC = g++
ARGS = -g -Wall -gnu++11

#looks at this directory, then create .exe in target 
SOURCE1 = sync/sync.cpp
TARGET1 = sync/sync

all: $(TARGET1)
			
$(TARGET1):
	$(CC) $(ARGS) $(SOURCE1) -o $(TARGET1) 
