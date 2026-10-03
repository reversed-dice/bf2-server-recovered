// FUNCTION: BF2 0x78e790
// AIObjectReal::getInformation 0x78e790 — tableau indexé
namespace dice { namespace hfe { namespace ai {

int getInformation(void* self, int idx) {
    return *(int*)((char*)self + (long)idx * 4 + 0x64);
}

}}}
