// FUNCTION: BF2 0x64b540
extern "C" void ghttpStartup(void*);
void fn_0x64b540(void* self) {
    *(void**)self = (void*)0xb89750;
    *(unsigned char*)((char*)self+8) = 0;
    *(unsigned char*)((char*)self+9) = 0;
    *(int*)((char*)self+0xc) = -1;
    *(long*)((char*)self+0x10) = 0;
    *(int*)((char*)self+0x18) = -1;
    *(int*)((char*)self+0x1c) = 1;
    ghttpStartup(self);
}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_HTTPRequest (0x64b540)
