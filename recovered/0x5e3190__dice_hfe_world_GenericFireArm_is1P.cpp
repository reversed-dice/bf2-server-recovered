// FUNCTION: BF2 0x5e3190
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    bool is1P();
};

bool GenericFireArm::is1P()
{
    void* state = ((void* (*)(void*))(*(void***)this)[0x380 / 8])(this);
    if (!state)
        return false;
    void* state2 = ((void* (*)(void*))(*(void***)this)[0x380 / 8])(this);
    if (((bool (*)(void*))(*(void***)state2)[0x310 / 8])(state2))
        return true;
    return false;
}

} } }
