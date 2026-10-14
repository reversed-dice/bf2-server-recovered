// FUNCTION: BF2 0x4a5150
#include <iostream>
#include <string>
#include <set>

namespace dice { namespace hfe {

namespace world { struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} }; }

namespace {

world::Vec3 zeroVec;

std::string defaultSquadNames[27] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
	"Gamma", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November",
	"Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform",
	"Victor", "Whiskey", "Xray", "Yankee", "Zulu"
};

std::set<int> m_startTicketsPerSetup[2];

} } }
