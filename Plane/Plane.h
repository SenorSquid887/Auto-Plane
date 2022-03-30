#pragma once
#include "waypoint.h"
#include "utils.h"

class plane {
public:
	plane();

	void fly(); //Send
private:

	Object home; //Home point. Determine plane stats based on thsi
	Object target; //Target point. Fly to here.
	
	waypoint w1 = waypoint(0, 0, 1); // 0-1
	waypoint w2 = waypoint(0, 0, 2); // 1-2
	waypoint w3 = waypoint(0, 0, 3); // 2-3
	waypoint w4 = waypoint(0, 0, 4); // 3-4
	waypoint w5 = waypoint(0, 0, 5); // 4-5
	waypoint w6 = waypoint(0, 0, 7.5); //5-7.5
	waypoint w7 = waypoint(0, 0, 10); //7.5-10
	waypoint w8 = waypoint(0, 0, 20); //10-20
	waypoint w9 = waypoint(0, 0, 30); //20-30
	waypoint w10 = waypoint(0, 0, 40); //30-40
};