/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntent>

@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long excludedAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long includedAttributes;
@property (nonatomic, readonly, copy) CLPlacemark *locationCreated;
@property (nonatomic, readonly, copy) NSArray *peopleInPhoto;
@property (nonatomic, readonly) long long peopleInPhotoOperator;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)albumName;
- (id)dateCreated;
- (unsigned long long)excludedAttributes;
- (unsigned long long)includedAttributes;
- (id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7;
- (id)locationCreated;
- (id)peopleInPhoto;
- (long long)peopleInPhotoOperator;
- (id)searchTerms;
- (long long)searchTermsOperator;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setExcludedAttributes:(unsigned long long)arg1;
- (void)setIncludedAttributes:(unsigned long long)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setSearchTerms:(id)arg1;

@end