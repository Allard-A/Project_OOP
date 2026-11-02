#include "Map.h"
#include <iostream>
const int MapLength = 10;
const int MapWidth = 20;
enum MapObstacle {
	Ground,
	Mountain,
	Water,
	Exit
};

int map[MapLength * MapWidth] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 2, 2, 0, 0, 0,
								  0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 2, 0, 0, 0,
						  		  0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 2, 2, 0, 0, 0, 2, 0, 0, 0,
								  0, 0, 2, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 2, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
								  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
int* p = map;

void Map::DisplayMap()
{	for (int y = 0; y < MapLength; y++) {
		for (int x = 0; x < MapWidth; x++) {
			 
				if (p[x + (y * MapWidth)] == Ground) {
					std::cout << '.' << ' ';
				}
				else if (p[x + (y * MapWidth)] == Mountain) {
					std::cout << 'A' << ' ';				}
				else if (p[x + (y * MapWidth)] == Water) {
					std::cout << '~' << ' ';
				}
				else if (p[x + (y * MapWidth)] == Exit) {
					std::cout << 'E' << ' ';
				}			
		}
		std::cout << '\n';
	}
}
