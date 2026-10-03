// FUNCTION: BF2 0x532700
// ObjectSpawner::setControlPointId 0x532700 — virtual
namespace dice { namespace hfe { namespace world {

typedef void (*VF_SETCP)(void*, int);

void setControlPointId(void* self, int id) {
    VF_SETCP f = (VF_SETCP)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x320));
    f(self, id);
}

}}}
