// FUNCTION: BF2 0x790780
// AITemplate::isCover 0x790780 — ptr+0x10 non-nul
namespace dice { namespace hfe { namespace ai {

bool isCover(void* self) {
    return *(void**)((char*)*reinterpret_cast<void**>(self) + 0x10) != 0;
}

}}}
