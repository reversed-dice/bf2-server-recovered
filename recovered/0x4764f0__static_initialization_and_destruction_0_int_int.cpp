// FUNCTION: BF2 0x4764f0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

namespace world { struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} }; }

namespace {

std::string defaultSquadNames[27] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
	"Gamma", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November",
	"Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform",
	"Victor", "Whiskey", "Xray", "Yankee", "Zulu"
};

world::Vec3 zeroVec;

std::string emptyString = "";

} } }
