// FUNCTION: BF2 0x442300
namespace dice {
namespace hfe {

enum EventCategory
{
};

class EventNode;

class GhostManager {
public:
    void handleEvent(EventCategory, unsigned int, EventNode*, void*);
};

void GhostManager::handleEvent(EventCategory, unsigned int, EventNode*, void*)
{
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_GhostManager_handleEvent_dice_hfe_EventCategory_unsigned_int_dice_hfe_EventNodeptr_voidptr::dice_hfe_GhostManager_handleEvent_dice_hfe_EventCategory_unsigned_int_dice_hfe_EventNodeptr_voidptr (0x442300)