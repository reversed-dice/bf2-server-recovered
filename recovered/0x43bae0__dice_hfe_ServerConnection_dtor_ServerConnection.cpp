// FUNCTION: BF2 0x43bae0
extern "C" void base_dice_hfe_ClientConnection_dtor_ClientConnection(void* self);

extern "C" void dtor_43bae0(void* self) {
    *(void**)self = (void*)0xb2f350;
    base_dice_hfe_ClientConnection_dtor_ClientConnection(self);
}
// REVERSED_FUNCTION: dice_hfe_ServerConnection_dtor_ServerConnection (0x43bae0)
