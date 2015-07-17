/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSource : NSObject {
    const char * _actualPath;
    unsigned int  _byHost;
    unsigned int  _checkedForNonPrefsPlist;
    unsigned int  _dirty;
    struct __CFString { } * _domain;
    short  _generationShmemIndex;
    unsigned int  _handlingRequest;
    unsigned int  _hasDrainedPendingChangesSinceLastReplyToOwner;
    NSObject<OS_dispatch_group> * _inProgressWriteGroup;
    unsigned int  _lastEgid;
    unsigned int  _lastEuid;
    unsigned int  _managed;
    unsigned int  _neverCache;
    int  _owner;
    const char * _pathToTemporaryFileToWriteTo;
    struct __CFArray { } * _pendingChangesQueue;
    unsigned long  _pendingChangesSize;
    CFPDDataBuffer * _plist;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _restrictedReadability;
    unsigned int  _unusedBits;
    struct __CFString { } * _userName;
    unsigned int  _waitingForDeviceUnlock;
}

+ (void)synchronousWithSourceCache:(id /* block */)arg1;
+ (void)withSourceCache:(id /* block */)arg1;
+ (void)withSourceForDomain:(struct __CFString { }*)arg1 inContainer:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 synchronously:(BOOL)arg6 perform:(id /* block */)arg7;

- (unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long*)arg1;
- (void)_writeToDisk:(BOOL)arg1;
- (BOOL)acceptLocalMessage:(id)arg1 withReply:(struct __CFDictionary { }*)arg2 inode:(unsigned long long*)arg3;
- (id)acceptMessage:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)asyncWriteToDisk;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long)arg2;
- (void)beginHandlingRequest;
- (BOOL)byHost;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPath;
- (void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)clearCache;
- (BOOL)clearCacheIfStale:(unsigned long long*)arg1;
- (struct __CFString { }*)container;
- (void)corruptedPlistFileDetected;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (void)endHandlingRequest;
- (void)enqueueNewKey:(struct __CFString { }*)arg1 value:(void*)arg2 size:(unsigned long)arg3;
- (BOOL)getUncanonicalizedPath:(char *)arg1;
- (void)handleAvoidCache;
- (void)handleDeviceUnlock;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleNoPlistFound;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)handleRootWrite;
- (void)handleSynchronous;
- (BOOL)hasEverHadMultipleOwners;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5;
- (void)lockedAsync:(id /* block */)arg1;
- (void)lockedSync:(id /* block */)arg1;
- (BOOL)managed;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (id)propertyList;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)removeOwner;
- (void)setDirty:(BOOL)arg1;
- (void)setPlist:(id)arg1;
- (short)shmemIndex;
- (BOOL)shouldBePurgable;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)transitionToMultiOwner;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString { }*)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(BOOL*)arg3;
- (BOOL)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;

@end
