// FUNCTION: BF2 0x69f270
// ObjectTemplate::updateFlags 0x69f270 — bitfield OR/AND-NOT
namespace dice { namespace hfe { namespace world {

class ObjectTemplate {
public:
    void updateFlags(unsigned int set, unsigned int clear);
};

void ObjectTemplate::updateFlags(unsigned int set, unsigned int clear) {
    *(unsigned int*)((char*)this + 0x2c) = (*(unsigned int*)((char*)this + 0x2c) | set) & ~clear;
}

}}}

// re-trigger validate 2026-08-06 17:11:41
