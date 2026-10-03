// FUNCTION: BF2 0x646d20
namespace dice { namespace hfe {

extern "C" void TiXmlElement_ClearThis(void*);
extern "C" void TiXmlAttributeSet_dtor_TiXmlAttributeSet(void*);
extern "C" void TiXmlNode_dtor_TiXmlNode(void*);
void fn_0x646d20(void* self) {
    *(void**)self = (void*)0xb88270;
    TiXmlElement_ClearThis(self);
    TiXmlAttributeSet_dtor_TiXmlAttributeSet((char*)self+0x58);
    TiXmlNode_dtor_TiXmlNode(self);
}

} }
// REVERSED_FUNCTION: TiXmlElement_dtor_TiXmlElement (0x646d20)
