// FUNCTION: BF2 0x790000
extern "C" char AIObject_checkIfInfoExists_78c0c0(void* self, unsigned int id);
extern "C" int AIObject_createInformationInternal_78c7a0(void* self, bool flag, double d, int a, bool b);

extern "C" unsigned int AIObjectShared_createInformation_790000(void* self, double d, int a, bool b) {
    unsigned int id = *(unsigned int*)((char*)self + 0x64);
    if (AIObject_checkIfInfoExists_78c0c0(self, id)) {
        return id;
    }
    typedef void* (*FnV)(void*);
    if (((FnV)(*(void***)self)[36])(self) != 0) {
        void* courier = *(void**)0x10ade58;
        typedef void (*FnC)(void*, void*);
        ((FnC)(*(void***)courier)[14])(courier, self);
    }
    unsigned int r = (unsigned int)AIObject_createInformationInternal_78c7a0(self, true, d, a, b);
    *(unsigned int*)((char*)self + 0x64) = r;
    return r;
}
