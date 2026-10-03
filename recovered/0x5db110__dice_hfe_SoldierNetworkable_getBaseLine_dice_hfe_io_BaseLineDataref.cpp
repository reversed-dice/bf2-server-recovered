// FUNCTION: BF2 0x5db110
// SoldierNetworkable::getBaseLine 0x5db110 — RAX 64-bit
namespace dice { namespace hfe { namespace io {

bool getBaseLine(void* self, void* bl) {
    unsigned long long id = *(unsigned short*)((char*)bl + 0x400);
    return id + 1 <= 0x200;
}

}}}
