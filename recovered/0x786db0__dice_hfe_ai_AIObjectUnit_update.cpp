// FUNCTION: BF2 0x786db0
// AIObjectUnit::update 0x786db0 — virtual [0x20]
namespace dice { namespace hfe { namespace ai {

typedef void (*VF_UPDATE)(void*);

void update(void* self) {
    VF_UPDATE f = (VF_UPDATE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x20));
    f(self);
}

}}}
