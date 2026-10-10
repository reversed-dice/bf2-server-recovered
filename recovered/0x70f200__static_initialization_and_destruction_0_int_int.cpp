// FUNCTION: BF2 0x70f200

#include <iostream>

namespace dice { namespace hfe { class Vars { public: static int* getInt(char const*, int); }; } }

namespace { int* g_0x70f200 = dice::hfe::Vars::getInt("phy-bsp-stats", 0); }
