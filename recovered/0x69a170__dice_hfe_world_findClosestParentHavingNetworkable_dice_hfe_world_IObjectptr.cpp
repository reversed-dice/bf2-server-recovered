// FUNCTION: BF2 0x69a170
typedef long (*vfn1)(void*);

extern "C" void* findClosestParentHavingNetworkable_69a170(void* self)
{
    while (true) {
        if (self == 0) {
            return 0;
        }
        if (((vfn1)(*(void***)self)[0x1b0/8])(self)) {
            break;
        }
        self = *(void**)((char*)self + 0x50);
    }
    return self;
}
