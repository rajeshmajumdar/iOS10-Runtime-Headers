/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMatchmakerHostViewController : GKUIRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol> {
    GKMatchmakerViewController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;

- (void)applicationWillEnterForeground;
- (void)cancelMatching;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (id)contextForRequestIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)inviterCancelled;
- (void)remoteViewControllerIsCanceling;
- (void)sendData:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(int)arg1;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)setPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(id)arg1 responded:(int)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)startMatchingWithRequest:(id)arg1;

@end
