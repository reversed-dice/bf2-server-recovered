// FUNCTION: BF2 0x823e40
extern "C" void qr2_register_keyA_823e40(int param1, void* param2)
{
    if ((unsigned int)(param1 - 0x32) < 0xcd) {
        *(void**)(0xf69ae0 + (long)param1 * 8) = param2;
    }
}
