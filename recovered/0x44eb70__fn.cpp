// FUNCTION: BF2 0x44eb70
extern "C" void fn_408238(void*, void*);
void dice_hfe_AutoRecorderHookThread_init(void* self, void* a, void* b, void* c)
{ *(void**)((char*)self + 0x28) = a; *(void**)((char*)self + 0x30) = b; fn_408238((char*)self + 0x20, c); }
