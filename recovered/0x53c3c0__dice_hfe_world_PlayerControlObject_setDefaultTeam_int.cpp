// FUNCTION: BF2 0x53c3c0
// PlayerControlObject::setDefaultTeam 0x53c3c0 — store + virtual tail-call
namespace dice { namespace hfe { namespace world {

typedef void (*VF_SETTEAM)(void*);

void setDefaultTeam(void* self, int team) {
    *(int*)((char*)self + 0x3dc) = team;
    VF_SETTEAM f = (VF_SETTEAM)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x418));
    f(self);
}

}}}
