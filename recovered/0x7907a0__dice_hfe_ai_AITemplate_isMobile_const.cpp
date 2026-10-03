// FUNCTION: BF2 0x7907a0
// AITemplate::isMobile 0x7907a0 — ptr+0x18 non-nul
namespace dice { namespace hfe { namespace ai {

bool isMobile(void* self) {
    return *(void**)((char*)*reinterpret_cast<void**>(self) + 0x18) != 0;
}

}}}
