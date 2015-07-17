/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallengeInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSString * _challengeID;
    NSOrderedSet * _compatibleBundleIDs;
    NSDate * _completionDate;
    GKGameInternal * _game;
    NSDate * _issueDate;
    GKPlayerInternal * _issuingPlayer;
    NSString * _message;
    GKPlayerInternal * _receivingPlayer;
    int  _state;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *challengeID;
@property (nonatomic, retain) NSOrderedSet *compatibleBundleIDs;
@property (nonatomic, retain) NSDate *completionDate;
@property (nonatomic, retain) GKGameInternal *game;
@property (nonatomic, retain) NSDate *issueDate;
@property (nonatomic, retain) GKPlayerInternal *issuingPlayer;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) GKPlayerInternal *receivingPlayer;
@property (nonatomic) int state;
@property (nonatomic, readonly) unsigned int type;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (id)challengeID;
- (id)compatibleBundleIDs;
- (id)completionDate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findLocalGameBundleID;
- (id)game;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)issueDate;
- (id)issuingPlayer;
- (id)message;
- (id)receivingPlayer;
- (id)serverRepresentation;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChallengeID:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setIssuingPlayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReceivingPlayer:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (unsigned int)type;

@end
