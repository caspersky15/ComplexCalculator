
CXX = g++
CALCUATOR = ComplexCalculator
COMPLEX = Complex
SERVICE = ComplexService

all: output

output: $(CALCUATOR).o $(COMPLEX).o $(SERVICE).o
	$(CXX) -o $(CALCUATOR) $(CALCUATOR).o $(COMPLEX).o $(SERVICE).o

ComplexCalclulator.o: $(CALCUATOR).cpp
	$(CXX) -c $(CALCUATOR).cpp

Complex.o: $(COMPLEX).cpp $(COMPLEX).h
	$(CXX) -c $(COMPLEX).cpp

ComplexService.o: $(SERVICE).cpp $(SERVICE).h
	$(CXX) -c $(SERVICE).cpp  

run: output
	./$(CALCUATOR)

clean:
	del *.o



