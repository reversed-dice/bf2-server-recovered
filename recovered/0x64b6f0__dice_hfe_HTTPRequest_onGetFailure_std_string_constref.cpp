// FUNCTION: BF2 0x64b6f0
// HTTPRequest::onGetFailure 0x64b6f0 — inc + flag reset
namespace dice { namespace hfe {

void onGetFailure(void* self) {
    (*(int*)((char*)self + 0x1c))++;
    *(unsigned char*)((char*)self + 8) = 0;
}

}}

// re-trigger validate 2026-08-06 20:38:54

// re-trigger validate 2026-08-07 00:30:40
