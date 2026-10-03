// FUNCTION: BF2 0x4bbc40
// SimpleObjectTemplate::writeBinary 0x58b4c0 — call + bool
namespace dice { namespace hfe { namespace world {

extern unsigned char write_impl(void* self, void* stream);

bool writeBinary(void* self, void* stream) {
    return write_impl(self, stream) != 0;
}

}}}
