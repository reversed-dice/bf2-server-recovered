// FUNCTION: BF2 0x5ea150
namespace dice { namespace hfe {
bool cb_0x5ea150(long* param_1) {
    bool r = (*(bool (**)(long*))(*param_1 + 0x1b8))(param_1);
    if (r == 0 && *(int*)((char*)param_1 + 0x68) != 2) {
        return true;
    }
    return false;
}
} }
