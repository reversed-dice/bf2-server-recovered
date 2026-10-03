// FUNCTION: BF2 0x814ae0
void add_to_queue(void* item, void* head) {
    void* tail;
    do {
        tail = head;
        head = *(void**)((char*)head + 8);
    } while (*(long*)((char*)tail + 8) != 0);
    *(void**)((char*)tail + 8) = item;
    *(void**)((char*)item + 0x10) = tail;
    *(void**)((char*)item + 8) = 0;
}
