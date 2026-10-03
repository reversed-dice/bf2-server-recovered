// FUNCTION: BF2 0x73e2d0
// LoadStat::setCurrentFile 0x73e2d0 — 2 pointeurs + tail-call
namespace dice { namespace hfe {

extern void set_file(void* a, void* b);

void setCurrentFile(void* self) {
    set_file((char*)self + 0x18, (char*)self + 0x20);
}

}}
