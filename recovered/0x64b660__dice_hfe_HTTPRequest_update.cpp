// FUNCTION: BF2 0x64b660
// HTTPRequest::update 0x64b660 — 2 handles conditionnels
namespace dice { namespace hfe {

extern void req_update(int h);

void update(void* self) {
    int h1 = *(int*)((char*)self + 0x18);
    if (h1 != -1)
        req_update(h1);
    int h2 = *(int*)((char*)self + 0xc);
    if (h2 != -1)
        req_update(h2);
}

}}
