/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItem : NSObject <GEOURLSerializable> {
    _MKMapItemPlaceAttribution * _attribution;
    <GEOMapItemTransitInfo> * _defaultTransitInfo;
    <NSObject> * _didResolveAttributionToken;
    _MKMapItemAttribution * _encyclopedicAttribution;
    <GEOMapItemPrivate> * _geoMapItem;
    BOOL  _isCurrentLocation;
    BOOL  _isPlaceHolder;
    BOOL  _isTransitInfoUpdated;
    BOOL  _isTransitItem;
    MKMapItemMetadata * _metadata;
    NSString * _name;
    NSString * _phoneNumber;
    _MKMapItemPhotosAttribution * _photosAttribution;
    GEOPlace * _place;
    _MKMapItemReviewsAttribution * _reviewsAttribution;
    NSTimeZone * _timeZone;
    <GEOMapItemTransitInfo> * _updatedTransitInfo;
    NSURL * _url;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) BOOL acceptsApplePay;
@property (getter=_attribution, nonatomic, readonly) _MKMapItemPlaceAttribution *attribution;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_cityAndCountry, nonatomic, readonly) NSString *cityAndCountry;
@property (getter=_coordinate, nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (getter=_displayMapRegion, nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (getter=_encyclopedicAttribution, nonatomic, readonly) _MKMapItemAttribution *encyclopedicAttribution;
@property (getter=_factoids, nonatomic, readonly) NSArray *factoids;
@property (getter=_firstLocalizedCategoryName, nonatomic, readonly) NSString *firstLocalizedCategoryName;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) NSString *formattedNumberOfReviews;
@property (nonatomic, readonly) NSString *formattedNumberOfReviewsIncludingProvider;
@property (getter=_geoAddress, nonatomic, readonly) GEOAddress *geoAddress;
@property (getter=_geoFenceMapRegion, nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_geoMapItem, nonatomic, readonly) <GEOMapItemPrivate> *geoMapItem;
@property (getter=_goodForKids, nonatomic, readonly) BOOL goodForKids;
@property (getter=_handle, nonatomic, readonly) NSData *handle;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) BOOL hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) BOOL hasAnyAmenities;
@property (getter=_hasBusinessClaim, nonatomic, readonly) BOOL hasBusinessClaim;
@property (getter=_hasDelivery, nonatomic, readonly) BOOL hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) BOOL hasDeliveryAmenity;
@property (getter=_hasDisplayableAmenities, readonly) BOOL hasDisplayableAmenities;
@property (getter=_hasFlyover, nonatomic, readonly) BOOL hasFlyover;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) BOOL hasGoodForKidsAmenity;
@property (getter=_hasLocalizedOperatingHours, nonatomic, readonly) BOOL hasLocalizedOperatingHours;
@property (getter=_hasMUID, nonatomic, readonly) BOOL hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) BOOL hasOperatingHours;
@property (getter=_hasPairOfFactoids, nonatomic, readonly) BOOL hasPairOfFactoids;
@property (getter=_hasPriceRange, nonatomic, readonly) BOOL hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) BOOL hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) BOOL hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) BOOL hasTakesReservationsAmenity;
@property (getter=_hasTextBlock, nonatomic, readonly) BOOL hasTextBlock;
@property (getter=_hasTransit, nonatomic, readonly) BOOL hasTransit;
@property (getter=_hasTransitDisplayName, nonatomic, readonly) BOOL hasTransitDisplayName;
@property (getter=_hasTransitLabels, nonatomic, readonly) BOOL hasTransitLabels;
@property (getter=_hasUserRatingScore, nonatomic, readonly) BOOL hasUserRatingScore;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCurrentLocation;
@property (getter=_isEmptyContactMapItem, readonly) BOOL isEmptyContactMapItem;
@property (nonatomic, readonly) BOOL isPlaceHolder;
@property (getter=_isTransitItem, nonatomic) BOOL isTransitItem;
@property (getter=_localizedOperatingHours, nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, readonly) MKMapItemMetadata *metadata;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) BOOL needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned int openingHoursOptions;
@property (nonatomic, copy) NSString *phoneNumber;
@property (getter=_photosAttribution, nonatomic, readonly) _MKMapItemPhotosAttribution *photosAttribution;
@property (nonatomic, readonly) GEOPlace *place;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceRangeString, nonatomic, readonly) NSString *priceRangeString;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) _MKMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_reviewsDisplayName, nonatomic, readonly) NSString *reviewsDisplayName;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_shortAddress, nonatomic, readonly) NSString *shortAddress;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) BOOL takesReservations;
@property (getter=_textBlockText, nonatomic, readonly) NSString *textBlockText;
@property (getter=_textBlockTitle, nonatomic, readonly) NSString *textBlockTitle;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOMapItemTransitAttribution> *transitAttribution;
@property (getter=_transitDisplayName, nonatomic, readonly) NSString *transitDisplayName;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (nonatomic, retain) NSURL *url;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (nonatomic, readonly) NSString *yelpID;

+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (void)_mapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(id /* block */)arg2;
+ (BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2;
+ (id)_sharedSessionURLForPunchoutURL:(id)arg1;
+ (id)_urlForMapItemHandles:(id)arg1 options:(id)arg2;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_acceptsApplePay;
- (id)_activityURL:(BOOL)arg1;
- (id)_attribution;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3;
- (id)_businessClaim;
- (id)_cityAndCountry;
- (struct { double x1; double x2; })_coordinate;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_displayMapRegion;
- (id)_encyclopedicAttribution;
- (id)_factoids;
- (id)_firstLocalizedCategoryName;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_formattedAddress;
- (id)_formattedAddressMultiline;
- (id)_formattedAddressWithSeparator:(id)arg1;
- (id)_geoAddress;
- (id)_geoFenceMapRegion;
- (id)_geoMapItem;
- (id)_getBusiness;
- (BOOL)_goodForKids;
- (id)_handle;
- (BOOL)_hasAcceptsApplePayAmenity;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasBusinessClaim;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasDisplayableAmenities;
- (BOOL)_hasFlyover;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasLocalizedOperatingHours;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPairOfFactoids;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasTextBlock;
- (BOOL)_hasTransit;
- (BOOL)_hasTransitDisplayName;
- (BOOL)_hasTransitLabels;
- (BOOL)_hasUserRatingScore;
- (id)_infoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_initWithLabelMarker:(id)arg1;
- (BOOL)_isEmptyContactMapItem;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (BOOL)_isTransitItem;
- (id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedOperatingHours;
- (id)_mapsDataString;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned int)_openingHoursOptions;
- (id)_photoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_photosAttribution;
- (id)_placeCardContact;
- (id)_placeDataAsData;
- (id)_poiSurveyURLString;
- (id)_priceRangeString;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (void)_refreshAttribution;
- (int)_resultProviderID;
- (id)_reviewForIdentifier:(id)arg1;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_reviewsAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_reviewsDisplayName;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_shortAddress;
- (id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1 includeMultilineAddress:(BOOL)arg2;
- (id)_styleAttributes;
- (BOOL)_takesReservations;
- (id)_textBlockText;
- (id)_textBlockTitle;
- (id)_timeZone;
- (id)_transitAttribution;
- (id)_transitDisplayName;
- (id)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_vendorID;
- (id)_webURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedNumberOfReviews;
- (id)formattedNumberOfReviewsIncludingProvider;
- (unsigned int)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithGeoMapItemAsCurrentLocation:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlaceHolder;
- (id)metadata;
- (id)name;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (id)phoneNumber;
- (id)place;
- (id)placemark;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setIsTransitItem:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 annotationView:(id)arg2;
- (id)timeZone;
- (void)updateWithTransitInfo:(id)arg1;
- (id)url;
- (id)urlRepresentation;
- (id)yelpID;

@end
