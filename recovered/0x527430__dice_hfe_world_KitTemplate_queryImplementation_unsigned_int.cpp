// FUNCTION: BF2 0x527430
// KitTemplate::queryImplementation 0x527430 — 2 IDs check
namespace dice { namespace hfe { namespace world {

extern void* qimp_impl2(void* self, unsigned int id);

void* queryImplementation(void* self, unsigned int id) {
    if (*(unsigned int*)0xc7d038 == id)
        return self;
    if (*(unsigned int*)0xc7d040 == id)
        return self;
    return qimp_impl2(self, id);
}

}}}
