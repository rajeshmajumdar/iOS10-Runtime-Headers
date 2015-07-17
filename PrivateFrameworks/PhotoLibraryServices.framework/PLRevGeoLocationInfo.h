/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoLocationInfo : NSObject {
    PLRevGeoCompoundNameInfo * _compoundNameInfo;
    PLRevGeoCompoundNameInfo * _compoundSecondaryNameInfo;
    <GEOMapItemPrivate> * _geoMapItem;
    BOOL  _isHome;
    BOOL  _isValid;
    NSString * _providerId;
    unsigned int  _providerVersion;
}

@property (nonatomic, retain) PLRevGeoCompoundNameInfo *compoundNameInfo;
@property (nonatomic, retain) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, retain) <GEOMapItemPrivate> *geoMapItem;
@property (nonatomic) BOOL isHome;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic) unsigned int providerVersion;

+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (unsigned int)currentVersion;
+ (BOOL)isValidFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (unsigned int)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (id /* block */)sortedNameInfoComparatorWithHomeAtEnd:(BOOL)arg1;

- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(int*)arg3;
- (id)compoundNameInfo;
- (id)compoundSecondaryNameInfo;
- (id)countryCode;
- (id)dataForInfo;
- (void)dealloc;
- (id)description;
- (id)geoMapItem;
- (id)initWithData:(id)arg1;
- (BOOL)isHome;
- (BOOL)isValid;
- (id)localizedDescription;
- (id)providerId;
- (unsigned int)providerVersion;
- (void)setCompoundNameInfo:(id)arg1;
- (void)setCompoundSecondaryNameInfo:(id)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setIsHome:(BOOL)arg1;
- (void)setProviderId:(id)arg1;
- (void)setProviderVersion:(unsigned int)arg1;

@end
