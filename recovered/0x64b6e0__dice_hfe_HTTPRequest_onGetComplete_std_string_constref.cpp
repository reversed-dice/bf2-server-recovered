// FUNCTION: BF2 0x64b6e0
// HTTPRequest::onGetComplete 0x64b6e0 — inc + flag reset
namespace dice { namespace hfe {

void onGetComplete(void* self) {
    (*(int*)((char*)self + 0x1c))++;
    *(unsigned char*)((char*)self + 8) = 0;
}

}}

// re-trigger validate 2026-08-06 20:38:47

// re-trigger validate 2026-08-07 00:30:33
