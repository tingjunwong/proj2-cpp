// SurfStoreProxy.hpp - xmlrpc-c C++ proxy class
// Auto-generated by xml-rpc-api2cpp.

#ifndef _SurfStoreProxy_HPP_
#define _SurfStoreProxy_HPP_ 1

#include <xmlrpc-c/oldcppwrapper.hpp>

class SurfStoreProxy {
    XmlRpcClient mClient;

public:
    SurfStoreProxy (const XmlRpcClient& client)
        : mClient(client) {}
    SurfStoreProxy (const std::string& server_url)
        : mClient(XmlRpcClient(server_url)) {}
    SurfStoreProxy (const SurfStoreProxy& o)
        : mClient(o.mClient) {}

    SurfStoreProxy& operator= (const SurfStoreProxy& o) {
        if (this != &o) mClient = o.mClient;
        return *this;
    }

    /* A simple ping method */
    bool ping ();

    /* Given a hash value, return the associated block */
    XmlRpcValue /*base64*/ getblock (std::string const string1);

    /* Puts a block in the store */
    bool putblock (XmlRpcValue /*base64*/ base641);

    /* Returns the subset of hash values stored in this server */
    XmlRpcValue /*array*/ hasblocks (XmlRpcValue /*array*/ array1);

    /* Retrieves the server's FileInfoMap */
    XmlRpcValue /*struct*/ getfileinfomap ();

    /* Updates the FileInfo entry of the given file */
    bool updatefile (XmlRpcValue /*struct*/ struct1);

    /* Is this metadata store a leader? */
    bool isleader ();

    /* Crashes this metadata store */
    bool crash ();

    /* Restores this metadata store */
    bool restore ();

    /* Returns whether this node is crashed or not */
    bool iscrashed ();
};

#endif /* _SurfStoreProxy_HPP_ */
