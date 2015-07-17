/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {
    unsigned int  _absEndTime;
    unsigned int  _absStartTime;
    GEOTransitRouteDisplayStrings * _displayStrings;
    struct { 
        unsigned int absEndTime : 1; 
        unsigned int absStartTime : 1; 
        unsigned int rank : 1; 
    }  _has;
    unsigned int  _rank;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _routeBadges;
    NSData * _routeHandle;
    NSMutableArray * _routePlanningArtworks;
    NSMutableArray * _steps;
    GEOPBTransitRoutingIncidentMessage * _transitIncidentMessage;
}

@property (nonatomic) unsigned int absEndTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic, retain) GEOTransitRouteDisplayStrings *displayStrings;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic, readonly) BOOL hasDisplayStrings;
@property (nonatomic) BOOL hasRank;
@property (nonatomic, readonly) BOOL hasRouteHandle;
@property (nonatomic, readonly) BOOL hasTransitIncidentMessage;
@property (nonatomic) unsigned int rank;
@property (nonatomic, readonly) int*routeBadges;
@property (nonatomic, readonly) unsigned int routeBadgesCount;
@property (nonatomic, retain) NSData *routeHandle;
@property (nonatomic, retain) NSMutableArray *routePlanningArtworks;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, retain) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;

- (unsigned int)absEndTime;
- (unsigned int)absStartTime;
- (void)addRouteBadge:(int)arg1;
- (void)addRoutePlanningArtwork:(id)arg1;
- (void)addSteps:(id)arg1;
- (void)clearRouteBadges;
- (void)clearRoutePlanningArtworks;
- (void)clearSteps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayStrings;
- (BOOL)hasAbsEndTime;
- (BOOL)hasAbsStartTime;
- (BOOL)hasDisplayStrings;
- (BOOL)hasRank;
- (BOOL)hasRouteHandle;
- (BOOL)hasTransitIncidentMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)rank;
- (BOOL)readFrom:(id)arg1;
- (int)routeBadgeAtIndex:(unsigned int)arg1;
- (int*)routeBadges;
- (unsigned int)routeBadgesCount;
- (id)routeHandle;
- (id)routePlanningArtworkAtIndex:(unsigned int)arg1;
- (id)routePlanningArtworks;
- (unsigned int)routePlanningArtworksCount;
- (void)setAbsEndTime:(unsigned int)arg1;
- (void)setAbsStartTime:(unsigned int)arg1;
- (void)setDisplayStrings:(id)arg1;
- (void)setHasAbsEndTime:(BOOL)arg1;
- (void)setHasAbsStartTime:(BOOL)arg1;
- (void)setHasRank:(BOOL)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setRouteBadges:(int*)arg1 count:(unsigned int)arg2;
- (void)setRouteHandle:(id)arg1;
- (void)setRoutePlanningArtworks:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setTransitIncidentMessage:(id)arg1;
- (id)steps;
- (id)stepsAtIndex:(unsigned int)arg1;
- (unsigned int)stepsCount;
- (id)transitIncidentMessage;
- (void)writeTo:(id)arg1;

@end
