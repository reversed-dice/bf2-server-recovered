// FUNCTION: BF2 0x790770
// AITemplate::isArmament 0x790770 — ptr non-nul
namespace dice { namespace hfe { namespace ai {

bool isArmament(void* self) {
    return *(void**)((char*)*reinterpret_cast<void**>(self)) != 0;
}

}}}
