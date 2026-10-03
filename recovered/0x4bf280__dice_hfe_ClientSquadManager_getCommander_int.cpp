// FUNCTION: BF2 0x4bf280
// ClientSquadManager::getCommander 0x4bf280 — tableau indexé
namespace dice { namespace hfe {

int getCommander(void* self, int idx) {
    return *(int*)((char*)self + (long)idx * 4 + 0x60);
}

}}
