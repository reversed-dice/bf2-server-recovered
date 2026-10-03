// FUNCTION: BF2 0x52e540
// ObjectSpawner::getHoldObjectId 0x52e540 — flag + dword
namespace dice { namespace hfe { namespace world {

int getHoldObjectId(void* self) {
    if (*(unsigned char*)((char*)self + 0x318) == 0)
        return -1;
    return *(int*)((char*)self + 0x298);
}

}}}
