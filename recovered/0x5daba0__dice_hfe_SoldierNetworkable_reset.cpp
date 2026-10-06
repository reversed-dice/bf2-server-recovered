// FUNCTION: BF2 0x5daba0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

class Networkable {
public:
    virtual ~Networkable();
    void reset();
    char _pad[0x70];
};

struct SoldierState {
    char _pad[4];
    bool valid;
    char _rest[0x9b];
};

class SoldierNetworkable : public Networkable {
public:
    void reset();
    SoldierState* m_states;
};

void SoldierNetworkable::reset()
{
    if (!m_states)
        return;
    for (int i = 0; i < 4; ++i)
        m_states[i].valid = false;
    Networkable::reset();
}

} }
