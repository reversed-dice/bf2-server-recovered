// FUNCTION: BF2 0x78f400
// AIObjectSecondaryReal::setPrimaryObject 0x78f400 — store + return arg
namespace dice { namespace hfe { namespace ai {

void* setPrimaryObject(void* self, void* obj) {
    *(void**)((char*)self + 0x78) = obj;
    return obj;
}

}}}
