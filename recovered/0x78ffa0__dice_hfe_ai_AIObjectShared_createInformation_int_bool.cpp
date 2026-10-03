// FUNCTION: BF2 0x78ffa0
namespace dice { namespace hfe { namespace ai {
void AIObjectShared_createInformation_0x78ffa0(void* self, int a, bool b) {
    void* fn = (*(void***)self)[0x2c];
    void* s = *(void**)0x010ade60;
    ((void (*)(void*))(*(void***)s)[0x2])(s);
    ((void (*)(void*, int, bool))fn)(self, a, b);
}
} } }
