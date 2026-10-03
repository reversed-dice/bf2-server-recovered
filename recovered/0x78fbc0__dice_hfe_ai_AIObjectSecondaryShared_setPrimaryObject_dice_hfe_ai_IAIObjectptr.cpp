// FUNCTION: BF2 0x78fbc0
// AIObjectSecondaryShared::setPrimaryObject 0x78fbc0 — store + return
namespace dice { namespace hfe { namespace ai {

void* setPrimaryObject(void* self, void* obj) {
    *(void**)((char*)self + 0x70) = obj;
    return obj;
}

}}}
