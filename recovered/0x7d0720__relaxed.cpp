// FUNCTION: BF2 0x7d0720
// EngineTemplate::setEngineType 0x631070 — bound check
namespace dice { namespace hfe { namespace world {

void setEngineType(void* self, int type) {
    if ((unsigned int)type <= 0x100)
        *(int*)((char*)self + 0x49c) = type;
}

}}}
