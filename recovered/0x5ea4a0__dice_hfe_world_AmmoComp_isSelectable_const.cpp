// FUNCTION: BF2 0x5ea4a0
namespace dice { namespace hfe { namespace world {

class AmmoComp {
public:
    bool isSelectable() const;
};

bool AmmoComp::isSelectable() const {
    const char* p = *(const char**)((const char*)this + 0x80);
    if (p[0x48] != 0) {
        typedef bool (*Fn)(const void*);
        Fn a = (Fn)(*(void** const*)this)[0x1b8 / 8];
        if (a(this)) {
            Fn b = (Fn)(*(void***)this)[0x1d0 / 8];
            if (!b(this))
                return false;
        }
    }
    return true;
}

} } }
