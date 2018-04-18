pos.png:CarlosSanchez_graph.py tray.txt
	python CarlosSanchez_graph.py

vel.png:CarlosSanchez_graph.py tray.txt
	python CarlosSanchez_graph.py

phase.png:CarlosSanchez_graph.py tray.txt
	python CarlosSanchez_graph.py

tray.txt:a.out
	./a.out CarlosSanchez_gravity.cpp

a.out:CarlosSanchez_gravity.cpp
	g++ CarlosSanchez_gravity.cpp
