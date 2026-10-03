// FUNCTION: BF2 0x46cc80
namespace dice { namespace hfe {

class GameSpyCDKeyAuthenticator {
public:
    void setStatusCallback(void* callback, void* context);

    void* vptr;              // +0x00
    void* m_statusCallback;  // +0x08
    void* m_context;         // +0x10
};

void GameSpyCDKeyAuthenticator::setStatusCallback(void* callback, void* context) {
    m_statusCallback = callback;
    m_context = context;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_setStatusCallback_void_ptr_int_dice_hfe_AuthResult_voidptr_voidptr (0x46cc80)