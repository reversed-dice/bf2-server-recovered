// FUNCTION: BF2 0x82e350
extern "C" int sprintf_like(void*, const char*, ...);
extern "C" void setattr_call(void*, void*, void*);
void fn_0x6470b0(void* self, void* name, int value) {
    char buf[0x10];
    sprintf_like(buf, (const char*)0xb97f28, value);
    setattr_call(self, name, buf);
}
// REVERSED_FUNCTION: TiXmlElement_SetAttribute_char_constptr_int (0x6470b0)
