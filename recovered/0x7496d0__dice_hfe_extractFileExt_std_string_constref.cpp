// FUNCTION: BF2 0x7496d0
// extractFileExt 0x7496d0 — call + return out
namespace dice { namespace hfe {

extern void extractext_fn(void* out, void* in);

void* extractFileExt(void* out, void* in) {
    extractext_fn(out, in);
    return out;
}

}}
