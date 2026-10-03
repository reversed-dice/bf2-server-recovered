// FUNCTION: BF2 0x527430
// MaskObjectTemplate::queryImplementation 0x52e3a0 — 2 IDs check
namespace dice { namespace hfe { namespace world {

extern void* qimp_impl(void* self, unsigned int id);

void* queryImplementation(void* self, unsigned int id) {
    if (*(unsigned int*)0xc7d034 == id)
        return self;
    if (*(unsigned int*)0xc7cf74 == id)
        return self;
    return qimp_impl(self, id);
}

}}}
