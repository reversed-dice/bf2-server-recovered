// FUNCTION: BF2 0x5ed3b0
// 0x5ed3b0 - ReplenishingAmmoCompTemplate constructor
extern "C" void fn_5eafa0(void*);
void fn_0x5ed3b0(void* self) {
    fn_5eafa0(self);
    *(void**)self = (void*)0xb70f70;
    *(void**)((char*)self + 0x8) = (void*)0xb70ff8;
    *(int*)((char*)self + 0x58) = 1;
    *(int*)((char*)self + 0x5c) = 0xbf800000;
    *(float*)((char*)self + 0x64) = 1.0f;
    *(float*)((char*)self + 0x68) = 0.0f;
    *(float*)((char*)self + 0x6c) = 0.0f;
    *(int*)((char*)self + 0x70) = -1;
    *(float*)((char*)self + 0x74) = 1.0f;
    *(int*)((char*)self + 0x78) = 0;
    *(char*)((char*)self + 0x7c) = 0;
}
