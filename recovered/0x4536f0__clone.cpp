// FUNCTION: BF2 0x4536f0
// ObjectSpawner::setControlPointId 0x532700 — virtual
namespace dice { namespace hfe { namespace world {

typedef void (*VF_SETCP)(void*, int);

void setControlPointId(void* self, int id) {
    VF_SETCP f = (VF_SETCP)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x2b0));
    f(self, id);
}

}}}
