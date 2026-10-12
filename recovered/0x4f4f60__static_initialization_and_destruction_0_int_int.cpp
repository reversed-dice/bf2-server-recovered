// FUNCTION: BF2 0x4f4f60
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static float* getFloat(char const*, float);
	static int* getInt(char const*, int);
};

std::string defaultSquadNames[] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma",
	"Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
	"Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
	"Yankee", "Zulu",
};

namespace {

float* g_freeCamSpeed = Vars::getFloat("demo-fspeed", 100.0f);
int* g_useOffset = Vars::getInt("demo-cam-offset", 1);
float* g_offsetSpeed = Vars::getFloat("demo-cam-offset-speed", 1.0f);
float* g_offsetMinDistance = Vars::getFloat("demo-cam-offset-min", 0.2f);
float* g_offsetSlowFactor = Vars::getFloat("demo-cam-offset-slow", 0.8f);
float* g_mouseWheelFactor = Vars::getFloat("demo-cam-mouse-wheel-scale", 0.85f);
int* g_360capture = Vars::getInt("demo-cam-360-capture", 0);
float* g_360captureAngle = Vars::getFloat("demo-cam-360-capture-move", 0.0f);

}

} }
