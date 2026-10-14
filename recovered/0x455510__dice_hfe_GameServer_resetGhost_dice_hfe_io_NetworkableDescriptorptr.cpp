// FUNCTION: BF2 0x455510
#include <map>

namespace dice { namespace hfe {

namespace io { class NetworkableDescriptor; }

class GhostManager {
public:
    void resetGhost(io::NetworkableDescriptor* desc);
};

class ClientConnection {
public:
    char m_pad[0x18];
    int m_type;
    char m_pad2[0x24];
    GhostManager* m_ghostManager;
};

namespace io {

class NetworkableValue {
public:
    char m_pad[0x1c];
    float m_value;
};

class NetworkableInner {
public:
    NetworkableValue* m_value;
};

class NetworkableNode {
public:
    NetworkableInner* m_inner;
};

class NetworkableDescriptor {
public:
    char m_pad[0x10];
    NetworkableNode* m_node;
};

}

class GameServer {
public:
virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27(); virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31(); virtual void _v32(); virtual void _v33(); virtual void _v34(); virtual void _v35(); virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39(); virtual void _v40(); virtual void _v41(); virtual void _v42(); virtual void _v43(); virtual void _v44(); virtual void _v45(); virtual void _v46(); virtual void _v47(); virtual void _v48(); virtual void _v49(); virtual void _v50(); virtual void _v51(); virtual void _v52(); virtual void _v53(); virtual void _v54(); virtual void _v55(); virtual void _v56(); virtual void _v57(); virtual void _v58(); virtual void _v59(); virtual void _v60(); virtual void _v61(); virtual void _v62(); virtual void _v63(); virtual void _v64(); virtual void _v65(); virtual void _v66(); virtual void _v67(); virtual void _v68(); virtual void _v69(); virtual void _v70(); virtual void _v71(); virtual void _v72(); virtual void _v73(); virtual void _v74(); virtual void _v75(); virtual void _v76(); virtual void _v77(); virtual void _v78();
    virtual void clearGhostRecording(io::NetworkableDescriptor* desc);
    virtual void _v80();
    virtual void stopGhostRecording(io::NetworkableDescriptor* desc);

    char m_pad[0xe0];
    std::map<unsigned int, ClientConnection*> m_clients;

    void resetGhost(io::NetworkableDescriptor* desc);
};

void GameServer::resetGhost(io::NetworkableDescriptor* desc) {
    std::map<unsigned int, ClientConnection*>::iterator it = m_clients.begin();
    if (it == m_clients.end()) return;
    if (1)
    do {
        ClientConnection* c = it->second;
        if (c->m_type > 2) {
            c->m_ghostManager->resetGhost(desc);
            float v = desc->m_node->m_inner->m_value->m_value;
            if (0.0f > v) {
                stopGhostRecording(desc);
            } else {
                clearGhostRecording(desc);
            }
        }
    } while (++it != m_clients.end());
}

} }
