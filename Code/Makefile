#Set shell
SHELL  = /bin/bash

#Compiler flags
CC     = msp430-gcc
SRC    = src/*.c
OUT    = bin.elf
CFLAGS = -Os -Wall -g -mmcu=msp430g2553


#Build rules
bin:
	$(CC) -o $(OUT) $(SRC) $(CFLAGS);
	
clean:
	@if [ -f "bin.elf" ]; then rm bin.elf; fi; \
	 echo -e "Binary removed";
	
