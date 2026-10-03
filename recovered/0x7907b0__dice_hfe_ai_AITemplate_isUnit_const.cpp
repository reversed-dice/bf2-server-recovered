// FUNCTION: BF2 0x7907b0
// AITemplate::isUnit 0x7907b0 — ptr+0x28 non-nul
namespace dice { namespace hfe { namespace ai {

bool isUnit(void* self) {
    return *(void**)((char*)*reinterpret_cast<void**>(self) + 0x28) != 0;
}

}}}
