// FUNCTION: BF2 0x46cc60
extern "C" void base_dice_hfe_Authenticator_dtor_Authenticator(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_46cc60(void* self) {
    *(void**)self = (void*)0xb32650;
    base_dice_hfe_Authenticator_dtor_Authenticator(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_dtor_GameSpyCDKeyAuthenticator (0x46cc60)
