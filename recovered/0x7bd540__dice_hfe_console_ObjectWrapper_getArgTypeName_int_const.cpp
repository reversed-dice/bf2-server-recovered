// FUNCTION: BF2 0x7bd540
// 0x7bd540 dice_hfe_console_ObjectWrapper_getArgTypeName_int_const
void* getArgTypeName(void* self, int idx)
{
    if (idx == 0) {
        void** w = (void**)(*(void**)((char*)self + 0x20));
        return ((void*(*)(void*))((void**)*w)[8])(w);
    } else {
        void** w = (void**)(*(void**)((char*)self + 0x20));
        return ((void*(*)(void*, int))((void**)*w)[9])(w, idx - 1);
    }
}
