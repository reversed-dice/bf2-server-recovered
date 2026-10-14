// FUNCTION: BF2 0x4543e0
#include <list>
extern "C" void* g_112ee38;

typedef void* (*vfn78)(void*);
struct Node { Node* next; Node* prev; void* data; };

extern "C" void simulatePlayerCollisions_453b20(void* self, void* p, float dt);

extern "C" void simulatePlayersCollisions_4543e0(void* self, float dt) {
    Node* head = (Node*)((vfn78)(*(void***)g_112ee38)[0x78/8])(g_112ee38);
    for (Node* e = head->next; e != head; e = e->next) {
        simulatePlayerCollisions_453b20(self, e->data, dt);
    }
}
