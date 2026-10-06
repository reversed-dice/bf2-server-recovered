// FUNCTION: BF2 0x69d070
#include <vector>

namespace dice {
namespace hfe {
    struct Vec3;
    namespace world {
        struct IObject;
        struct ObjectPredicator;

        class QuadTreeCuller {
        public:
            struct Node;

            void getPosAndRadiusObjects(Node* node);

            void getObjects(Vec3 const& pos, float radius, std::vector<IObject*>& out, ObjectPredicator* pred);

            char pad_0[0x20];
            Vec3 const* m_pos; // 0x20
            float m_radius;    // 0x28
            int pad_2c;
            std::vector<IObject*>* m_out; // 0x30
            void* pad_38;
            ObjectPredicator* m_pred; // 0x40
            char pad_48[0xf8 - 0x48];
            Node* m_root;      // 0xf8
            int m_searchCount; // 0x100
        };

        void QuadTreeCuller::getObjects(Vec3 const& pos, float radius, std::vector<IObject*>& out, ObjectPredicator* pred) {
            if (m_root) {
                ++m_searchCount;
                m_out = &out;
                m_pred = pred;
                m_pos = &pos;
                m_radius = radius;
                getPosAndRadiusObjects(m_root);
            }
        }
    }
}
}
