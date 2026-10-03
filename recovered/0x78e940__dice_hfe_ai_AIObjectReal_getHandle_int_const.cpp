// FUNCTION: BF2 0x78e940
// AIObjectReal::getHandle 0x78e940 — tableau indexé
namespace dice { namespace hfe { namespace ai {

int getHandle(void* self, int idx) {
    return *(int*)((char*)self + (long)idx * 4 + 0x64);
}

}}}
