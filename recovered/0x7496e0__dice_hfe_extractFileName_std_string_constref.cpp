// FUNCTION: BF2 0x7496e0
// extractFileName 0x7496e0 — call + return out
namespace dice { namespace hfe {

extern void extract_name_fn(void* out, void* in);

void* extractFileName(void* out, void* in) {
    extract_name_fn(out, in);
    return out;
}

}}
