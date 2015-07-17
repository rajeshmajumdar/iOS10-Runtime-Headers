/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageStore : MFMessageStore {
    MailAccount * _account;
    unsigned int  _deletedMessageCount;
    unsigned int  _deletedMessagesSize;
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 23; 
    }  _flags;
    unsigned int  _generationNumber;
    unsigned int  _lastFetchCount;
    MFMailboxUid * _mailboxUid;
    MFActivityMonitor * _openMonitor;
    unsigned int  _state;
    unsigned int  _unreadMessageCount;
}

+ (Class)classForMimePart;
+ (id)copyMessageWithSelection:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (Class)headersClass;
+ (BOOL)storeAtPathIsWritable:(id)arg1;

- (id)_defaultRouterDestination;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllMessageData;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setFlagsForMessages:(id)arg1;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)account;
- (void)allMessageFlagsDidChange:(id)arg1;
- (BOOL)allowsAppend;
- (unsigned int)appendMessageSelections:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (int)archiveDestination;
- (BOOL)canCompact;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)canFetchMessageIDs;
- (BOOL)canFetchSearchResults;
- (void)cancelOpen;
- (void)close;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)deletedCount:(unsigned int*)arg1 andSize:(unsigned int*)arg2;
- (id)description;
- (void)didOpen;
- (id)displayName;
- (void)doCompact;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (int)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (int)fetchMobileSynchronously:(unsigned int)arg1;
- (int)fetchMobileSynchronously:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)fetchWindow;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (unsigned int)growFetchWindow;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (BOOL)hasMoreFetchableMessages;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (unsigned int)indexOfMessage:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)invalidateFetchWindow;
- (BOOL)isDrafts;
- (BOOL)isOpened;
- (BOOL)isReadOnly;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)mailboxUid;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)messageIdRollCall:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (void)messagesWillBeCompacted:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (id)remoteIDsMatchingSearchText:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)serverMessageCount;
- (unsigned int)serverUnreadCount;
- (unsigned int)serverUnreadOnlyOnServerCount;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagForAllMessages:(id)arg1 state:(BOOL)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (BOOL)shouldArchive;
- (BOOL)shouldDeleteInPlace;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldGrowFetchWindow;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (id)status;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (id)storePathRelativeToAccount;
- (void)structureDidChange;
- (BOOL)supportsArchiving;
- (unsigned int)totalCount;
- (void)undeleteMessages:(id)arg1;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (unsigned int)unreadCount;
- (unsigned int)unreadCountMatchingCriterion:(id)arg1;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2;
- (void)updateUserInfoToLatestValues;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;

@end
