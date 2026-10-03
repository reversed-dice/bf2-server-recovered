// FUNCTION: BF2 0x424f10
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class DataBlockEvent {
public:
    void* vtable;
    void destroy();
};
void DataBlockEvent::destroy() {
    vtable = (void*)0xb2c210;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_DataBlockEvent_dtor_DataBlockEvent (0x424f10)
