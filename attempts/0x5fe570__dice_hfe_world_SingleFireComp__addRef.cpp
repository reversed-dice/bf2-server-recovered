namespace dice { namespace hfe { namespace world {

class SingleFireComp {
    unsigned char _pad0x000[0x160];
    int m_refCount;
public:
    void addRef();
};

void SingleFireComp::addRef() {
    ++m_refCount;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SingleFireComp::addRef (0x5fe570)