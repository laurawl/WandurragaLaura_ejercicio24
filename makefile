metro.png : metro.py metro.dat
	python metro.py
	
metro.dat : metro.x
	./metro.x > metro.dat
	
metro.x : metro.cpp
	c++ metro.cpp -o metro.x

clean :
	rm metro.png metro.x metro.dat