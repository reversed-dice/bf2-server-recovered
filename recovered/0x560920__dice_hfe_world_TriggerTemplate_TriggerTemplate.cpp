// FUNCTION: BF2 0x560920
// 0x560920 - TriggerTemplate constructor - match all fields
extern "C" void fn_5767f0(void*);
void fn_0x560920(void* self) {
    fn_5767f0(self);
    *(void**)self = (void*)0xb51fb0;
    *(void**)((char*)self + 0x10) = (void*)0xb52240;
    *(void**)((char*)self + 0x68) = (void*)0xb52278;
    *(void**)((char*)self + 0x1c8) = (void*)0xb522f8;
    *(int*)((char*)self + 0x1f4) = 1;
    *(int*)((char*)self + 0x1f8) = 0;
    *(float*)((char*)self + 0x1fc) = 0.0f;
    *(int*)((char*)self + 0x200) = -1;
    *(float*)((char*)self + 0x204) = 0.0f;
    *(float*)((char*)self + 0x208) = 0.0f;
    *(int*)((char*)self + 0x20c) = 0x3f800000;
    *(char*)((char*)self + 0x210) = 0;
}
