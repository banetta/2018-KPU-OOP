#include "cpp-tr-013h.h"

int navigator::findShortestPath() {
	shortestPath = 5 + rand() % 6;
	return shortestPath;
}

void navigator::monitor() {
	cout << "\n-------------  navigator moniter  ---------------\n";
	cout << "No. of roads in the shortest path : " << shortestPath << " raods\n";
	cout << "-------------------------------------------------\n\n";
}