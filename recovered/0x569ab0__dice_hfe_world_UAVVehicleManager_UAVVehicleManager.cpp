// FUNCTION: BF2 0x569ab0
namespace dice { namespace hfe { namespace world {
void UAVVehicleManager_0x569ab0(void* self) {
    *(void**)self = (void*)0xb542c0;
    *(void**)((char*)self + 8) = 0;
    *(void**)((char*)self + 0x10) = 0;
    *(char*)((char*)self + 0x18) = 0;
    *(char*)((char*)self + 0x19) = 0;
    if (!*(void**)0x0108f2a0) {
        void* s = *(void**)0x010b3730;
        ((void (*)(void*, int, void*, int))(*(void***)s)[0xb])(s, 0, self, 0);
        *(void**)0x0108f2a0 = self;
    }
}
} } }
