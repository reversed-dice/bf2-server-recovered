// FUNCTION: BF2 0x834970
typedef void (*vfn1)(void*, void*, void*);

extern "C" void gpiProfileMapCallback_834970(void* param1, void** param2)
{
    vfn1 fn = (vfn1)param2[1];
    fn(param2[0], param1, param2[2]);
}
