/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionAdvisorSettings : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _aggregateByIdentifier;
    NSSet * _constrainAccounts;
    NSSet * _constrainBundleIds;
    NSSet * _constrainDirections;
    NSSet * _constrainDomainIdentifiers;
    NSSet * _constrainIdentifiers;
    NSSet * _constrainKeywords;
    NSSet * _constrainLocationUUIDs;
    NSSet * _constrainMechanisms;
    NSSet * _constrainPersonIdType;
    NSSet * _constrainPersonIds;
    NSSet * _constrainRecipients;
    NSSet * _constrainSenders;
    NSString * _contactPrefix;
    NSSet * _ignoreContactIdentifiers;
    NSSet * _ignoreInteractionUUIDs;
    NSDate * _interactionDate;
    NSString * _interactionLocationUUID;
    NSString * _interactionTitle;
    BOOL  _requireOutgoingInteraction;
    unsigned int  _resultLimit;
    NSSet * _seedIdentifiers;
    BOOL  _useFuture;
}

@property BOOL aggregateByIdentifier;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainDirections;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainKeywords;
@property (retain) NSSet *constrainLocationUUIDs;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainPersonIdType;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainRecipients;
@property (retain) NSSet *constrainSenders;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *ignoreContactIdentifiers;
@property (retain) NSSet *ignoreInteractionUUIDs;
@property (retain) NSDate *interactionDate;
@property (retain) NSString *interactionLocationUUID;
@property (retain) NSString *interactionTitle;
@property BOOL requireOutgoingInteraction;
@property unsigned int resultLimit;
@property (retain) NSSet *seedIdentifiers;
@property BOOL useFuture;

+ (id)extractContactIdentifiers:(id)arg1;
+ (id)interactionAdvisorSettingsDefault;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)aggregateByIdentifier;
- (id)constrainAccounts;
- (id)constrainBundleIds;
- (id)constrainDirections;
- (id)constrainDomainIdentifiers;
- (id)constrainIdentifiers;
- (id)constrainKeywords;
- (id)constrainLocationUUIDs;
- (id)constrainMechanisms;
- (id)constrainPersonIdType;
- (id)constrainPersonIds;
- (id)constrainRecipients;
- (id)constrainSenders;
- (id)contactPrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)ignoreContactIdentifiers;
- (id)ignoreInteractionUUIDs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interactionDate;
- (id)interactionLocationUUID;
- (id)interactionPredicate;
- (id)interactionTitle;
- (BOOL)requireOutgoingInteraction;
- (unsigned int)resultLimit;
- (id)seedIdentifiers;
- (void)setAggregateByIdentifier:(BOOL)arg1;
- (void)setConstrainAccounts:(id)arg1;
- (void)setConstrainBundleIds:(id)arg1;
- (void)setConstrainDirections:(id)arg1;
- (void)setConstrainDomainIdentifiers:(id)arg1;
- (void)setConstrainIdentifiers:(id)arg1;
- (void)setConstrainKeywords:(id)arg1;
- (void)setConstrainLocationUUIDs:(id)arg1;
- (void)setConstrainMechanisms:(id)arg1;
- (void)setConstrainPersonIdType:(id)arg1;
- (void)setConstrainPersonIds:(id)arg1;
- (void)setConstrainRecipients:(id)arg1;
- (void)setConstrainSenders:(id)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setIgnoreContactIdentifiers:(id)arg1;
- (void)setIgnoreInteractionUUIDs:(id)arg1;
- (void)setInteractionDate:(id)arg1;
- (void)setInteractionLocationUUID:(id)arg1;
- (void)setInteractionTitle:(id)arg1;
- (void)setRequireOutgoingInteraction:(BOOL)arg1;
- (void)setResultLimit:(unsigned int)arg1;
- (void)setSeedIdentifiers:(id)arg1;
- (void)setUseFuture:(BOOL)arg1;
- (BOOL)useFuture;

@end
