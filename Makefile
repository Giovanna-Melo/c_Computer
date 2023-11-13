all:
	gcc -c -Wall *.h
	gcc -c -Wall *.c
	gcc -o programa *.o
clean:
	rm -rf programa *.h.gch
	rm -rf programa *.o
run:
	./programa