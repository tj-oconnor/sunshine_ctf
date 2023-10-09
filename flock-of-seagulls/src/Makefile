CFLAGS = -no-pie -fno-stack-protector 
CHAL   = flock
SRC    = $(CHAL).c
BIN    = $(CHAL).bin

example:
	gcc -o $(BIN) $(SRC) $(CFLAGS)

clean:
	rm -rf $(BIN) 
