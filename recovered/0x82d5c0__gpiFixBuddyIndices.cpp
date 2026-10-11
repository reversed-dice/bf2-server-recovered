// FUNCTION: BF2 0x82d5c0
struct GPIBuddyStatus {
    int buddyIndex;
};

struct GPIProfile {
    char pad[8];
    GPIBuddyStatus *buddyStatus;
};

extern "C" int gpiFixBuddyIndices(void *connection, GPIProfile *profile, void *data)
{
    int baseIndex = (int)(unsigned long)data;
    if (profile->buddyStatus && profile->buddyStatus->buddyIndex > baseIndex)
        profile->buddyStatus->buddyIndex--;
    return 1;
}
