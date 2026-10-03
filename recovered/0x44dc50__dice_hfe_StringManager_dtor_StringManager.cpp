// FUNCTION: BF2 0x44dc50
extern "C" void dtor_inner(void*);
extern "C" void dtor_outer(void*);
void StringManager_dtor(void* self) {
    *(void**)self = (void*)0xb2feb0;
    dtor_inner((char*)self + 8);
    dtor_outer(self);
}
