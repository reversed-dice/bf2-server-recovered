// FUNCTION: BF2 0x823e60
namespace dice { namespace hfe {
extern void* fn_840a50(void* a);
extern void fn_823e40(int a, void* b);
extern void fn_823d80(void* a);
void qr2_register_keyW_0x823e60(int arg1, void* arg2) {
    void* p = fn_840a50(arg2);
    fn_823e40(arg1, p);
    fn_823d80(p);
}
} }
