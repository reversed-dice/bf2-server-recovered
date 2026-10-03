// FUNCTION: BF2 0x64b700
// HTTPRequest::onPostComplete 0x64b700 — reset champs
namespace dice { namespace hfe {

void onPostComplete(void* self) {
    *(void**)((char*)self + 0x10) = 0;
    *(unsigned char*)((char*)self + 9) = 0;
}

}}

// re-trigger validate 2026-08-06 20:39:44

// re-trigger validate 2026-08-07 00:31:27
