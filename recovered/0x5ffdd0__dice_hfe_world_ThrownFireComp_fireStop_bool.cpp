// FUNCTION: BF2 0x5ffdd0
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    void fireStop(bool b);
};

class ThrownFireComp : public FireComp {
public:
    char _pad0[0x174];
    char m_174;                 // +0x174
    char _pad1[0x47];
    char m_1bc;                 // +0x1bc
    void fireStop(bool b);
};

void ThrownFireComp::fireStop(bool b)
{
    void* o = *(void**)((char*)this + 0x18);
    void* p = ((void* (*)(void*))(*(void***)o)[0x380 / 8])(o);
    if (p != 0 && ((char (*)(void*))(*(void***)p)[0x378 / 8])(p) != 0) {
        m_1bc = 1;
        return;
    }
    FireComp::fireStop(b);
    if (m_174 != 0 && b != 0)
        m_174 = 0;
}

} } }
