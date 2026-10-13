// FUNCTION: BF2 0x686c80
#include <iostream>

namespace dice { namespace hfe {

namespace world { class IPlayer; }

template <typename T>
struct Flag32Bits {
    unsigned int setFlags;
    unsigned int unsetFlags;
    static unsigned int usedFlags;
    Flag32Bits(unsigned int bit) : setFlags(0), unsetFlags(0) {
        static unsigned int s_dup;
        if ((usedFlags & bit) == 0) {
            usedFlags |= bit;
            setFlags = bit;
        } else {
            s_dup = 0;
        }
    }
};

namespace world {

Flag32Bits<IPlayer> PFIsAi(1);
Flag32Bits<IPlayer> PFIsNetwork(2);
Flag32Bits<IPlayer> PFHasUpdate(4);
Flag32Bits<IPlayer> PFIsBackstepping(8);

} } }
