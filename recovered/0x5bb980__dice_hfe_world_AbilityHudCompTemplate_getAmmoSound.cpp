// FUNCTION: BF2 0x5bb980
// AbilityHudCompTemplate::getAmmoSound 0x5bb980 — call + return self
namespace dice { namespace hfe { namespace world {

extern void get_str(void* out, void* in);

void* getAmmoSound(void* out, void* in) {
    get_str(out, (char*)in + 0x28);
    return out;
}

}}}
