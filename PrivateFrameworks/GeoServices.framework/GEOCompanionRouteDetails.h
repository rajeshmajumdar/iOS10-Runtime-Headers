/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {
    BOOL  _canNavigate;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _coordinates;
    GEOTransitDecoderData * _decoderData;
    GEOMapItemStorage * _destination;
    NSString * _destinationName;
    unsigned int  _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicalDuration : 1; 
        unsigned int originalDuration : 1; 
        unsigned int transportType : 1; 
        unsigned int canNavigate : 1; 
        unsigned int showTransitSchedules : 1; 
    }  _has;
    unsigned int  _historicalDuration;
    NSString * _name;
    GEOMapItemStorage * _origin;
    unsigned int  _originalDuration;
    GEOTransitSuggestedRoute * _originalSuggestedRoute;
    NSData * _routeID;
    BOOL  _showTransitSchedules;
    NSMutableArray * _steps;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _trafficColors;
    int  _transportType;
}

@property (nonatomic) BOOL canNavigate;
@property (nonatomic, readonly) double*coordinates;
@property (nonatomic, readonly) unsigned int coordinatesCount;
@property (nonatomic, retain) GEOTransitDecoderData *decoderData;
@property (nonatomic, retain) GEOMapItemStorage *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasCanNavigate;
@property (nonatomic, readonly) BOOL hasDecoderData;
@property (nonatomic, readonly) BOOL hasDestination;
@property (nonatomic, readonly) BOOL hasDestinationName;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasHistoricalDuration;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasOrigin;
@property (nonatomic) BOOL hasOriginalDuration;
@property (nonatomic, readonly) BOOL hasOriginalSuggestedRoute;
@property (nonatomic, readonly) BOOL hasRouteID;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int historicalDuration;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) GEOMapItemStorage *origin;
@property (nonatomic) unsigned int originalDuration;
@property (nonatomic, retain) GEOTransitSuggestedRoute *originalSuggestedRoute;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) BOOL showTransitSchedules;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned int trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned int trafficColorsCount;
@property (nonatomic) int transportType;

- (void)addCoordinates:(double)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (BOOL)canNavigate;
- (void)clearCoordinates;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (double*)coordinates;
- (double)coordinatesAtIndex:(unsigned int)arg1;
- (unsigned int)coordinatesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decoderData;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (BOOL)hasCanNavigate;
- (BOOL)hasDecoderData;
- (BOOL)hasDestination;
- (BOOL)hasDestinationName;
- (BOOL)hasDistance;
- (BOOL)hasHistoricalDuration;
- (BOOL)hasName;
- (BOOL)hasOrigin;
- (BOOL)hasOriginalDuration;
- (BOOL)hasOriginalSuggestedRoute;
- (BOOL)hasRouteID;
- (BOOL)hasShowTransitSchedules;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (unsigned int)historicalDuration;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSyntheticRoute;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)origin;
- (unsigned int)originalDuration;
- (id)originalSuggestedRoute;
- (BOOL)readFrom:(id)arg1;
- (id)routeID;
- (void)setCanNavigate:(BOOL)arg1;
- (void)setCoordinates:(double*)arg1 count:(unsigned int)arg2;
- (void)setDecoderData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasCanNavigate:(BOOL)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setHasHistoricalDuration:(BOOL)arg1;
- (void)setHasOriginalDuration:(BOOL)arg1;
- (void)setHasShowTransitSchedules:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHistoricalDuration:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setOriginalDuration:(unsigned int)arg1;
- (void)setOriginalSuggestedRoute:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setShowTransitSchedules:(BOOL)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTransportType:(int)arg1;
- (BOOL)showTransitSchedules;
- (id)stepAtIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned int)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned int)trafficColorsCount;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
