graph.png: SS_graph.py advection.txt
	python SS_graph.py

advection.txt: advec
	./advec > advection.txt

advec: SS_avection.cpp
	c++ SS_advection.cpp -o advec

