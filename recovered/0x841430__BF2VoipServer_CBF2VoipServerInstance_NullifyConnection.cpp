// FUNCTION: BF2 0x841430
bool BF2VoipServer_CBF2VoipServerInstance_NullifyConnection(void* self) {
    *(int*)((char*)self+0xaa4) = 0;
    *(int*)((char*)self+0xaa8) = 0;
    *(int*)((char*)self+0x1278) = 0;
    *(int*)((char*)self+0x127c) = 0;
    *(int*)((char*)self+0x1280) = 0;
    return true;
}
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServerInstance_NullifyConnection (0x841430)
