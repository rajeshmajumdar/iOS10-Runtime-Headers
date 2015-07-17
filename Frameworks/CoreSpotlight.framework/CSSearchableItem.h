/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSCopying, NSSecureCoding> {
    CSSearchableItemAttributeSet * _attributeSet;
}

@property (retain) CSSearchableItemAttributeSet *attributeSet;
@property (copy) NSString *bundleID;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property BOOL isUpdate;
@property BOOL noIndex;
@property (copy) NSString *protection;
@property BOOL representsDeepLink;
@property (copy) NSString *uniqueIdentifier;

+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fixBrokenAuthors:(id)arg1;
- (BOOL)_hasAttributesOfType:(id)arg1;
- (BOOL)_isFullyFormed;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 itemPersons:(id)arg3 personDictionary:(id)arg4 contactProperties:(id)arg5 nameKey:(id)arg6 emailKey:(id)arg7 personKey:(id)arg8 attributeSet:(id)arg9;
- (id)_propertiesDescription;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_updateWithSearchableItem:(id)arg1;
- (id)attributeSet;
- (id)attributes;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)filteredSpotlightAttributes;
- (unsigned int)hash;
- (id)init;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUpdate;
- (BOOL)noIndex;
- (id)protection;
- (BOOL)representsDeepLink;
- (id)searchableItem;
- (void)setAttributeSet:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsUpdate:(BOOL)arg1;
- (void)setNoIndex:(BOOL)arg1;
- (void)setProtection:(id)arg1;
- (void)setRepresentsDeepLink:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)standardizeAttributes;
- (id)uniqueIdentifier;

@end
