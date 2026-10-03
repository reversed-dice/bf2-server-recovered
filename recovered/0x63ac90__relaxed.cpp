// FUNCTION: BF2 0x63ac90
// EngineTemplate::setEngineType 0x631070 — bound check
namespace dice { namespace hfe { namespace world {

void setEngineType(void* self, int type) {
    if ((unsigned int)type <= 0x2)
        *(int*)((char*)self + 0x210) = type;
}

}}}
