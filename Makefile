build:
	g++ -std=c++23 main.cpp `pkg-config --cflags --libs gtkmm-4.0` -o bin/main

run: build
	bin/main

