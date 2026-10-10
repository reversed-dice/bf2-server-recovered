// FUNCTION: BF2 0x635420
namespace dice { namespace hfe {
namespace io {
class PlayerInput {
public:
    int vals[0x40];
    unsigned long long flags;
};
}
namespace world {
class IPlayer {
public:
    virtual void v0();
};
class ForceObject {
public:
    virtual void v0();
    char pad[0x228];
    void* m_230;
    int m_238;
    void handlePlayerInput(IPlayer* player, io::PlayerInput const& in, float f, unsigned int u);
};
void ForceObject::handlePlayerInput(IPlayer* player, io::PlayerInput const& in, float f, unsigned int u)
{
    int n = *(int*)((char*)m_230 + 0x1c8);
    m_238 = (n <= 0x3f && ((in.flags >> n) & 1) != 0) ? in.vals[(unsigned)n] : 0;
}
} } }
