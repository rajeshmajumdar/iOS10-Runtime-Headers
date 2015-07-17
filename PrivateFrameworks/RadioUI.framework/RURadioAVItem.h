/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAVItem : MPAVItem {
    NSArray * _buyOffers;
    BOOL  _heartbeatInvalid;
    BOOL  _isInWishList;
    RadioTrack * _radioTrack;
    RadioStation * _station;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationName;
    NSString * _stationStringID;
}

@property (nonatomic, readonly) BOOL _canUseStoreAdamIDForSubscriptionAdamID;
@property (getter=isHeartbeatInvalid, nonatomic) BOOL heartbeatInvalid;
@property (nonatomic) BOOL isInWishList;
@property (nonatomic, retain) RadioStation *station;
@property (nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationName;
@property (nonatomic, readonly) NSString *stationStringID;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (void)_beginUsingPlaybackLease;
- (BOOL)_canUseStoreAdamIDForSubscriptionAdamID;
- (void)_handleUpdatedLikedState:(int)arg1 completion:(id /* block */)arg2;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (int)_persistedLikedState;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1 completion:(id /* block */)arg2;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)aggregateDictionaryItemType;
- (id)album;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)buyOffers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithRadioTrack:(id)arg1;
- (BOOL)isCloudItem;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isHeartbeatInvalid;
- (BOOL)isInWishList;
- (BOOL)isLikedStateEnabled;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned int)mpuReporting_itemType;
- (BOOL)mpuReporting_shouldReportPlayEventsToStore;
- (id)mpuReporting_trackInfo;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (void)setHeartbeatInvalid:(BOOL)arg1;
- (void)setIsInWishList:(BOOL)arg1;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (long long)storeItemInt64ID;
- (long long)storeSubscriptionAdamID;
- (BOOL)supportsLikedState;
- (BOOL)supportsSettingCurrentTime;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)urlTimeMarkers;
- (BOOL)usesSubscriptionLease;

@end
