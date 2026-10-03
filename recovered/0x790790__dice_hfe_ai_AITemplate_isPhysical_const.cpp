// FUNCTION: BF2 0x790790
// AITemplate::isPhysical 0x790790 — ptr+0x20 non-nul
namespace dice { namespace hfe { namespace ai {

bool isPhysical(void* self) {
    return *(void**)((char*)*reinterpret_cast<void**>(self) + 0x20) != 0;
}

}}}
