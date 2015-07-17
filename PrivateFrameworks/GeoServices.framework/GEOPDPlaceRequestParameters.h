/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {
    GEOPDAutocompleteParameters * _autocompleteParameters;
    GEOPDBatchPopularNearbySearchParameters * _batchPopularNearbySearchParameters;
    GEOPDSearchBrowseCategorySuggestionParameters * _browseCategorySuggestionParameters;
    GEOPDCanonicalLocationSearchParameters * _canonicalLocationSearchParameters;
    GEOPDCategorySearchParameters * _categorySearchParameters;
    GEOPDGeocodingParameters * _geocodingParameters;
    GEOPDLocationDirectedSearchParameters * _locationDirectedSearchParameters;
    GEOPDMerchantLookupParameters * _merchantLookupParameters;
    GEOPDNearbySearchParameters * _nearbySearchParameters;
    GEOPDPlaceLookupParameters * _placeLookupParameters;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOPDPopularNearbySearchParameters * _popularNearbySearchParameters;
    GEOPDReverseGeocodingParameters * _reverseGeocodingParameters;
    GEOPDSearchFieldPlaceholderParameters * _searchFieldPlaceholderParameters;
    GEOPDSearchParameters * _searchParameters;
    GEOPDSearchZeroKeywordCategorySuggestionParameters * _searchZeroKeywordCategorySuggestionParameters;
    GEOPDSiriSearchParameters * _siriSearchParameters;
    GEOPDVendorSpecificPlaceRefinementParameters * _vendorSpecificPlaceRefinementParameters;
}

@property (nonatomic, retain) GEOPDAutocompleteParameters *autocompleteParameters;
@property (nonatomic, retain) GEOPDBatchPopularNearbySearchParameters *batchPopularNearbySearchParameters;
@property (nonatomic, retain) GEOPDSearchBrowseCategorySuggestionParameters *browseCategorySuggestionParameters;
@property (nonatomic, retain) GEOPDCanonicalLocationSearchParameters *canonicalLocationSearchParameters;
@property (nonatomic, retain) GEOPDCategorySearchParameters *categorySearchParameters;
@property (nonatomic, retain) GEOPDGeocodingParameters *geocodingParameters;
@property (nonatomic, readonly) BOOL hasAutocompleteParameters;
@property (nonatomic, readonly) BOOL hasBatchPopularNearbySearchParameters;
@property (nonatomic, readonly) BOOL hasBrowseCategorySuggestionParameters;
@property (nonatomic, readonly) BOOL hasCanonicalLocationSearchParameters;
@property (nonatomic, readonly) BOOL hasCategorySearchParameters;
@property (nonatomic, readonly) BOOL hasGeocodingParameters;
@property (nonatomic, readonly) BOOL hasLocationDirectedSearchParameters;
@property (nonatomic, readonly) BOOL hasMerchantLookupParameters;
@property (nonatomic, readonly) BOOL hasNearbySearchParameters;
@property (nonatomic, readonly) BOOL hasPlaceLookupParameters;
@property (nonatomic, readonly) BOOL hasPlaceRefinementParameters;
@property (nonatomic, readonly) BOOL hasPopularNearbySearchParameters;
@property (nonatomic, readonly) BOOL hasReverseGeocodingParameters;
@property (nonatomic, readonly) BOOL hasSearchFieldPlaceholderParameters;
@property (nonatomic, readonly) BOOL hasSearchParameters;
@property (nonatomic, readonly) BOOL hasSearchZeroKeywordCategorySuggestionParameters;
@property (nonatomic, readonly) BOOL hasSiriSearchParameters;
@property (nonatomic, readonly) BOOL hasVendorSpecificPlaceRefinementParameters;
@property (nonatomic, retain) GEOPDLocationDirectedSearchParameters *locationDirectedSearchParameters;
@property (nonatomic, retain) GEOPDMerchantLookupParameters *merchantLookupParameters;
@property (nonatomic, retain) GEOPDNearbySearchParameters *nearbySearchParameters;
@property (nonatomic, retain) GEOPDPlaceLookupParameters *placeLookupParameters;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOPDPopularNearbySearchParameters *popularNearbySearchParameters;
@property (nonatomic, retain) GEOPDReverseGeocodingParameters *reverseGeocodingParameters;
@property (nonatomic, retain) GEOPDSearchFieldPlaceholderParameters *searchFieldPlaceholderParameters;
@property (nonatomic, retain) GEOPDSearchParameters *searchParameters;
@property (nonatomic, retain) GEOPDSearchZeroKeywordCategorySuggestionParameters *searchZeroKeywordCategorySuggestionParameters;
@property (nonatomic, retain) GEOPDSiriSearchParameters *siriSearchParameters;
@property (nonatomic, retain) GEOPDVendorSpecificPlaceRefinementParameters *vendorSpecificPlaceRefinementParameters;

- (id)autocompleteParameters;
- (id)batchPopularNearbySearchParameters;
- (id)browseCategorySuggestionParameters;
- (id)canonicalLocationSearchParameters;
- (id)categorySearchParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geocodingParameters;
- (BOOL)hasAutocompleteParameters;
- (BOOL)hasBatchPopularNearbySearchParameters;
- (BOOL)hasBrowseCategorySuggestionParameters;
- (BOOL)hasCanonicalLocationSearchParameters;
- (BOOL)hasCategorySearchParameters;
- (BOOL)hasGeocodingParameters;
- (BOOL)hasLocationDirectedSearchParameters;
- (BOOL)hasMerchantLookupParameters;
- (BOOL)hasNearbySearchParameters;
- (BOOL)hasPlaceLookupParameters;
- (BOOL)hasPlaceRefinementParameters;
- (BOOL)hasPopularNearbySearchParameters;
- (BOOL)hasReverseGeocodingParameters;
- (BOOL)hasSearchFieldPlaceholderParameters;
- (BOOL)hasSearchParameters;
- (BOOL)hasSearchZeroKeywordCategorySuggestionParameters;
- (BOOL)hasSiriSearchParameters;
- (BOOL)hasVendorSpecificPlaceRefinementParameters;
- (unsigned int)hash;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProviderId:(id)arg5;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)locationDirectedSearchParameters;
- (id)merchantLookupParameters;
- (void)mergeFrom:(id)arg1;
- (id)nearbySearchParameters;
- (id)placeLookupParameters;
- (id)placeRefinementParameters;
- (id)popularNearbySearchParameters;
- (BOOL)readFrom:(id)arg1;
- (id)reverseGeocodingParameters;
- (id)searchFieldPlaceholderParameters;
- (id)searchParameters;
- (id)searchZeroKeywordCategorySuggestionParameters;
- (void)setAutocompleteParameters:(id)arg1;
- (void)setBatchPopularNearbySearchParameters:(id)arg1;
- (void)setBrowseCategorySuggestionParameters:(id)arg1;
- (void)setCanonicalLocationSearchParameters:(id)arg1;
- (void)setCategorySearchParameters:(id)arg1;
- (void)setGeocodingParameters:(id)arg1;
- (void)setLocationDirectedSearchParameters:(id)arg1;
- (void)setMerchantLookupParameters:(id)arg1;
- (void)setNearbySearchParameters:(id)arg1;
- (void)setPlaceLookupParameters:(id)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPopularNearbySearchParameters:(id)arg1;
- (void)setReverseGeocodingParameters:(id)arg1;
- (void)setSearchFieldPlaceholderParameters:(id)arg1;
- (void)setSearchParameters:(id)arg1;
- (void)setSearchZeroKeywordCategorySuggestionParameters:(id)arg1;
- (void)setSiriSearchParameters:(id)arg1;
- (void)setVendorSpecificPlaceRefinementParameters:(id)arg1;
- (id)siriSearchParameters;
- (id)vendorSpecificPlaceRefinementParameters;
- (void)writeTo:(id)arg1;

@end
