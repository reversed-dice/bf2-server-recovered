// FUNCTION: BF2 0x636d90
// 0x636d20 - LandingGearTemplate constructor - match exact constants
extern "C" void fn_588460(void*);
void fn_0x636d20(void* self) {
    fn_588460(self);
    *(void**)self = (void*)0xb83ed0;
    *(void**)((char*)self + 0x10) = (void*)0xb84160;
    *(void**)((char*)self + 0x68) = (void*)0xb84198;
    *(void**)((char*)self + 0x1c8) = (void*)0xb84218;
    *(int*)((char*)self + 0x28c) = 0x41f00000;
    *(int*)((char*)self + 0x290) = 0x41a00000;
    *(int*)((char*)self + 0x294) = 0x42700000;
    *(int*)((char*)self + 0x298) = 0x428c0000;
    *(float*)((char*)self + 0x29c) = 0.0f;
    *(float*)((char*)self + 0x2a0) = 0.0f;
    *(char*)((char*)self + 0x2a4) = 0;
}
