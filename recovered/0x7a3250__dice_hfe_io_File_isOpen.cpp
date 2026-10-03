// FUNCTION: BF2 0x7a3250
// File::isOpen 0x7a3250 — [0] != 0
namespace dice { namespace hfe { namespace io {

bool isOpen(void* self) {
    return *(void**)self != 0;
}

}}}
