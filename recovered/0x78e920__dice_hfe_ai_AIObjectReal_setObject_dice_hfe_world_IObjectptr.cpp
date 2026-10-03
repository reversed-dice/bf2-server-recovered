// FUNCTION: BF2 0x78e920
// AIObjectReal::setObject 0x78e920 — store ptr
namespace dice { namespace hfe { namespace ai {

void setObject(void* self, void* obj) {
    *(void**)((char*)self + 0x20) = obj;
}

}}}
