object = main.o factorial.o hello.o

main : $(object)
	g++ -o main $(object)
