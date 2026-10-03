// FUNCTION: BF2 0x58b4e0
// SimpleObjectTemplate::readBinary 0x58b4e0 — call + bool
namespace dice { namespace hfe { namespace world {

extern unsigned char read_impl(void* self, void* stream);

bool readBinary(void* self, void* stream) {
    return read_impl(self, stream) != 0;
}

}}}
