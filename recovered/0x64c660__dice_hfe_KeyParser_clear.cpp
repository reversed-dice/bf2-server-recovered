// FUNCTION: BF2 0x64c660
// KeyParser::clear 0x64c660 — méthode avec this + 2 champs
namespace dice { namespace hfe {

extern void kp_clear_fn(void* self, void* a, void* b);

void keyparser_clear(void* self) {
    kp_clear_fn(self, *(void**)self, *(void**)((char*)self + 8));
}

}}

// re-trigger validate 2026-08-06 20:38:04

// re-trigger validate 2026-08-07 00:29:55
