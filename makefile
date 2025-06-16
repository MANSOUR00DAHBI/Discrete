.PHONY: All clean 
#Compiler 
CC= gcc -g
CFLAGS= -Wall -Wextra 
DCFLAGS= -lm 
#MyName Program
Name= Setup
#Obeject 
OBJC= Out.o
#Files Source 
File= Variables.c 

All: $(OBJC)
	$(CC)  $(CFLAGS) -o $(Name) $(OBJC)  $(DCFLAGS)
$(OBJC):	
	$(CC) $(CFLAGS) -c -o $(OBJC) $(File) $(DCFLAGS)

clean:
	rm -rfv Setup Out.o
