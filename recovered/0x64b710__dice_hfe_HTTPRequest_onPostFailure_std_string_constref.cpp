// FUNCTION: BF2 0x64b710
// HTTPRequest::onPostFailure 0x64b710 — reset champs
namespace dice { namespace hfe {

void onPostFailure(void* self) {
    *(void**)((char*)self + 0x10) = 0;
    *(unsigned char*)((char*)self + 9) = 0;
}

}}

// re-trigger validate 2026-08-06 20:39:51
