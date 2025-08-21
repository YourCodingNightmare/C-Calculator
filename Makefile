compile:
ifeq ($(wildcard bin),)
	mkdir bin
endif
	gcc simple/main.c -o bin/simple.exe
	gcc temperature/main.c -o bin/temp.exe

rsimple:
	./bin/simple.exe
rtemp:
	./bin/temp.exe