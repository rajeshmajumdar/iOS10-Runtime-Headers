/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationList : NSObject {
    BOOL  _loadedConversations;
    BOOL  _loadingConversations;
    CKConversation * _pendingConversation;
    NSMutableArray * _trackedConversations;
}

@property (nonatomic, readonly) BOOL loadingConversations;
@property (nonatomic, retain) CKConversation *pendingConversation;

+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (void)initialize;
+ (id)sharedConversationList;

- (void)_abChanged:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleMemoryWarning:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_postConversationListChangedNotification;
- (BOOL)_shouldFilterForParticipants:(id)arg1;
- (id)activeConversations;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 create:(BOOL)arg4;
- (id)conversations;
- (void)dealloc;
- (void)deleteConversation:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (id)description;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (BOOL)hasActiveConversations;
- (id)init;
- (BOOL)loadingConversations;
- (id)pendingConversation;
- (id)pendingConversationCreatingIfNecessary;
- (void)resetCaches;
- (void)resort;
- (void)setNeedsReload;
- (void)setPendingConversation:(id)arg1;
- (void)stopTrackingConversation:(id)arg1;
- (void)unpendConversation;
- (int)unreadCount;
- (int)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (id)unreadLastMessages;

@end
