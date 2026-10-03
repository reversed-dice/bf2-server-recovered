// FUNCTION: BF2 0x849560
namespace dice { namespace hfe {
extern void fn_84a4a0(void* a, unsigned short b, void* c, int d);
int PbSvSendToAddrPort_0x849560(void* self, unsigned short arg2, int arg3, void* arg4) {
    fn_84a4a0(self, arg2, arg4, arg3);
    return 0;
}
} }
