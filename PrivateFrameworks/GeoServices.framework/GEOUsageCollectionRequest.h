/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _abExperimentAssignments;
    NSMutableArray * _directionsFeedbackCollections;
    NSMutableArray * _leaveNowFeedbackCollections;
    NSMutableArray * _mapsLaunchFeedbackCollections;
    NSMutableArray * _mapsUsageFeedbackCollections;
    NSMutableArray * _placeDataCacheFeedbackCollections;
    NSMutableArray * _stateTimingFeedbackCollections;
    NSMutableArray * _suggestionsFeedbackCollections;
    NSMutableArray * _tileSetStateFeedbackCollections;
    NSMutableArray * _timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray * _timeToLeaveInitialTravelTimeFeedbackCollections;
    NSMutableArray * _transitAppLaunchFeedbackCollections;
    NSMutableArray * _usageCollections;
}

@property (nonatomic, retain) NSMutableArray *abExperimentAssignments;
@property (nonatomic, retain) NSMutableArray *directionsFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *leaveNowFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *mapsLaunchFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *mapsUsageFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *placeDataCacheFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *stateTimingFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *suggestionsFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *tileSetStateFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *transitAppLaunchFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *usageCollections;

- (id)abExperimentAssignmentAtIndex:(unsigned int)arg1;
- (id)abExperimentAssignments;
- (unsigned int)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)addLeaveNowFeedbackCollection:(id)arg1;
- (void)addMapsLaunchFeedbackCollection:(id)arg1;
- (void)addMapsUsageFeedbackCollection:(id)arg1;
- (void)addPlaceDataCacheFeedbackCollection:(id)arg1;
- (void)addStateTimingFeedbackCollection:(id)arg1;
- (void)addSuggestionsFeedbackCollection:(id)arg1;
- (void)addTileSetStateFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)addUsageCollection:(id)arg1;
- (void)clearAbExperimentAssignments;
- (void)clearDirectionsFeedbackCollections;
- (void)clearLeaveNowFeedbackCollections;
- (void)clearMapsLaunchFeedbackCollections;
- (void)clearMapsUsageFeedbackCollections;
- (void)clearPlaceDataCacheFeedbackCollections;
- (void)clearStateTimingFeedbackCollections;
- (void)clearSuggestionsFeedbackCollections;
- (void)clearTileSetStateFeedbackCollections;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (void)clearTransitAppLaunchFeedbackCollections;
- (void)clearUsageCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)directionsFeedbackCollections;
- (unsigned int)directionsFeedbackCollectionsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)leaveNowFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)leaveNowFeedbackCollections;
- (unsigned int)leaveNowFeedbackCollectionsCount;
- (id)mapsLaunchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)mapsLaunchFeedbackCollections;
- (unsigned int)mapsLaunchFeedbackCollectionsCount;
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)mapsUsageFeedbackCollections;
- (unsigned int)mapsUsageFeedbackCollectionsCount;
- (void)mergeFrom:(id)arg1;
- (id)placeDataCacheFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)placeDataCacheFeedbackCollections;
- (unsigned int)placeDataCacheFeedbackCollectionsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbExperimentAssignments:(id)arg1;
- (void)setDirectionsFeedbackCollections:(id)arg1;
- (void)setLeaveNowFeedbackCollections:(id)arg1;
- (void)setMapsLaunchFeedbackCollections:(id)arg1;
- (void)setMapsUsageFeedbackCollections:(id)arg1;
- (void)setPlaceDataCacheFeedbackCollections:(id)arg1;
- (void)setStateTimingFeedbackCollections:(id)arg1;
- (void)setSuggestionsFeedbackCollections:(id)arg1;
- (void)setTileSetStateFeedbackCollections:(id)arg1;
- (void)setTimeToLeaveHypothesisFeedbackCollections:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(id)arg1;
- (void)setTransitAppLaunchFeedbackCollections:(id)arg1;
- (void)setUsageCollections:(id)arg1;
- (id)stateTimingFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)stateTimingFeedbackCollections;
- (unsigned int)stateTimingFeedbackCollectionsCount;
- (id)suggestionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)suggestionsFeedbackCollections;
- (unsigned int)suggestionsFeedbackCollectionsCount;
- (id)tileSetStateFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)tileSetStateFeedbackCollections;
- (unsigned int)tileSetStateFeedbackCollectionsCount;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)timeToLeaveHypothesisFeedbackCollections;
- (unsigned int)timeToLeaveHypothesisFeedbackCollectionsCount;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)timeToLeaveInitialTravelTimeFeedbackCollections;
- (unsigned int)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)transitAppLaunchFeedbackCollections;
- (unsigned int)transitAppLaunchFeedbackCollectionsCount;
- (id)usageCollectionAtIndex:(unsigned int)arg1;
- (id)usageCollections;
- (unsigned int)usageCollectionsCount;
- (void)writeTo:(id)arg1;

@end
