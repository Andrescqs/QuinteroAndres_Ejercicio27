

ecuas.py : datos.dat
	python ecuas.py
	

datos.dat : ecuas.x
	./ecuas.x

ecuas.x : ecuas.cpp
	c++ ecuas.cpp -o ecuas.x