// FUNCTION: BF2 0x43e550
extern "C" void dtor_inner(void*);
extern "C" void dtor_outer(void*);
void DataBlockManager_dtor(void* self) {
    *(void**)self = (void*)0xb2f690;
    dtor_inner((char*)self + 8);
    dtor_outer(self);
}
