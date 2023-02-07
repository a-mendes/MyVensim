# Windows Makefile

funcional: system.o flow.o model.o main.o flowLogistic.o flowComplex.o flowExponential.o funcionalTests.o
	@g++ ./bin/src/flow.o ./bin/src/system.o ./bin/src/model.o ./bin/test/funcional/main.o ./bin/test/funcional/flowLogistic.o ./bin/test/funcional/flowComplex.o ./bin/test/funcional/flowExponential.o ./bin/test/funcional/funcionalTests.o -o funcional.exe

# Source
flow.o: ./src/flow.cpp
	@g++ -c ./src/flow.cpp -o ./bin/src/flow.o

system.o: ./src/system.cpp
	@g++ -c ./src/system.cpp -o ./bin/src/system.o	

model.o: ./src/model.cpp
	@g++ -c ./src/model.cpp -o ./bin/src/model.o

# Funcional Test
main.o: ./test/funcional/main.cpp
	@g++ -c ./test/funcional/main.cpp -o ./bin/test/funcional/main.o

flowLogistic.o: ./test/funcional/flowLogistic.cpp
	@g++ -c ./test/funcional/flowLogistic.cpp -o ./bin/test/funcional/flowLogistic.o

flowExponential.o: ./test/funcional/flowExponential.cpp
	@g++ -c ./test/funcional/flowExponential.cpp -o ./bin/test/funcional/flowExponential.o

flowComplex.o: ./test/funcional/flowComplex.cpp
	@g++ -c ./test/funcional/flowComplex.cpp -o ./bin/test/funcional/flowComplex.o

funcionalTests.o: ./test/funcional/funcionalTests.cpp
	@g++ -c ./test/funcional/funcionalTests.cpp -o ./bin/test/funcional/funcionalTests.o

all:
	@make funcional

run:
	@./funcional.exe

go:
	@cls
	@make all
	@make run

clean:
	@del *.exe /q
	@cls