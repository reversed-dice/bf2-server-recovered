// FUNCTION: BF2 0x644790
extern "C" void real_operator_delete_array(void*);
void fn_0x644790(void* self) {
    void* p = *(void**)self;
    if (p) real_operator_delete_array(p);
}
// REVERSED_FUNCTION: TiXmlBase_StringToBuffer_dtor_StringToBuffer (0x644790)
