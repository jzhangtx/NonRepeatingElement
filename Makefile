NonRepeatingElement: NonRepeatingElement.o
	g++ -g -o NonRepeatingElement.exe NonRepeatingElement.o -pthread    

NonRepeatingElement.o: NonRepeatingElement/NonRepeatingElement.cpp
	g++ -g  -c -pthread NonRepeatingElement/NonRepeatingElement.cpp
