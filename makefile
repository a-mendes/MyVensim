# Windows Makefile

funcional: funcional_main.o funcional_tests.o 
	@g++ ./bin/test/funcional/funcional_tests.o ./bin/test/funcional/main.o -o funcional.exe
	@./funcional.exe

unit:  unit_main.o unit_tests.o 
	@g++ ./bin/test/unit/main.o ./bin/test/unit/unit_tests.o -o unit.exe
	@./unit.exe


all: main.o mySim.o 
	@g++ ./bin/src/main.o ./bin/src/mySim.o ./bin/test/unit/main.o ./bin/test/unit/unit_tests.o -o api.exe

# Source
main.o: ./src/main.cpp
	@g++ -c ./src/main.cpp -o ./bin/src/main.o

mySim.o: ./src/mySim.cpp
	@g++ -c ./src/mySim.cpp -o ./bin/src/mySim.o


# Funcional Test
funcional_main.o: ./test/funcional/main.cpp
	@g++ -c ./test/funcional/main.cpp -o ./test/funcional/main.o

funcional_tests.o: ./test/funcional/funcional_tests.cpp
	@g++ -c ./test/funcional/funcional_tests.cpp -o ./bin/test/funcional/funcional_tests.o


# Unit Test
unit_main.o: ./test/unit/main.cpp
	@g++ -c ./test/unit/main.cpp -o ./bin/test/unit/main.o

unit_tests.o: ./test/unit/unit_tests.cpp
	@g++ -c ./test/unit/unit_tests.cpp -o ./bin/test/unit/unit_tests.o

run:
	@./api.exe

go:
	@cls
	@make all
	@make run

clean:
	@del *.exe /q
	@cls