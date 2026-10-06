// FUNCTION: BF2 0x5c9210
// BF2_FLAGS: -fno-strict-aliasing
#include <string.h>
namespace dice { namespace hfe {

class Networkable {
public:
    virtual ~Networkable();
    void reset();
    char _pad[0x78];
};

struct EngineState {
    char data[0x3c];
};

class EngineNetworkable : public Networkable {
public:
    void reset();
    EngineState* m_states;
};

void EngineNetworkable::reset()
{
    Networkable::reset();
    for (int i = 0; i < 4; ++i)
        memset(&m_states[i], 0, sizeof(EngineState));
}

} }
