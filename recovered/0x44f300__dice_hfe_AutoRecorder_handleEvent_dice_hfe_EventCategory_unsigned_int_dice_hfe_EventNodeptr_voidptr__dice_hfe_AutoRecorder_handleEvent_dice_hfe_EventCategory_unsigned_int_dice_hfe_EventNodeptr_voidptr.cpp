// FUNCTION: BF2 0x44f300
namespace dice { namespace hfe {

class AutoRecorder {
public:
    void handleEvent(int category, unsigned int eventId, void* node, void* data);

private:
    static void roundFinished();
};

void AutoRecorder::handleEvent(int category, unsigned int eventId, void* node, void* data) {
    if (category == 0) {
        if ((eventId - 1u) == 0u) {
            if (*static_cast<const int*>(data) == 2) {
                roundFinished();
            }
        }
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_AutoRecorder_handleEvent_dice_hfe_EventCategory_unsigned_int_dice_hfe_EventNodeptr_voidptr (0x44f300)