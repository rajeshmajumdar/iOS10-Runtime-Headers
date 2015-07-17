/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitStep : PBCodable <NSCopying> {
    unsigned int  _accessPointZilchIndex;
    GEOTransitArrivalInfo * _arrivalInfo;
    unsigned int  _defaultVehicleInfoIndex;
    unsigned int  _departureFrequency;
    unsigned int  _distanceInMeters;
    unsigned int  _endingStopIndex;
    NSMutableArray * _enterExitInfos;
    struct { 
        unsigned int accessPointZilchIndex : 1; 
        unsigned int defaultVehicleInfoIndex : 1; 
        unsigned int departureFrequency : 1; 
        unsigned int distanceInMeters : 1; 
        unsigned int endingStopIndex : 1; 
        unsigned int listTransitIncidentMessageIndex : 1; 
        unsigned int maneuverType : 1; 
        unsigned int routeDetailsSecondaryArtworkIndex : 1; 
        unsigned int significanceForEndNode : 1; 
        unsigned int startingStopIndex : 1; 
        unsigned int startingTime : 1; 
        unsigned int steppingTransitIncidentMessageIndex : 1; 
        unsigned int walkingIndex : 1; 
        unsigned int zilchIndex : 1; 
        unsigned int prioritizeTilesPreloading : 1; 
    }  _has;
    GEOInstructionSet * _instructions;
    unsigned int  _listTransitIncidentMessageIndex;
    GEOLatLng * _location;
    int  _maneuverType;
    BOOL  _prioritizeTilesPreloading;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _routeDetailsPrimaryArtworkIndexs;
    unsigned int  _routeDetailsSecondaryArtworkIndex;
    int  _significanceForEndNode;
    unsigned int  _startingStopIndex;
    unsigned int  _startingTime;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _steppingArtworkIndexs;
    unsigned int  _steppingTransitIncidentMessageIndex;
    NSMutableArray * _transferInfos;
    GEOPBTransitRoutingIncidentMessage * _transitIncidentMessage;
    NSMutableArray * _vehicleInfos;
    unsigned int  _walkingIndex;
    unsigned int  _zilchIndex;
}

@property (nonatomic) unsigned int accessPointZilchIndex;
@property (nonatomic, retain) GEOTransitArrivalInfo *arrivalInfo;
@property (nonatomic) unsigned int defaultVehicleInfoIndex;
@property (nonatomic) unsigned int departureFrequency;
@property (nonatomic) unsigned int distanceInMeters;
@property (nonatomic) unsigned int endingStopIndex;
@property (nonatomic, retain) NSMutableArray *enterExitInfos;
@property (nonatomic) BOOL hasAccessPointZilchIndex;
@property (nonatomic, readonly) BOOL hasArrivalInfo;
@property (nonatomic) BOOL hasDefaultVehicleInfoIndex;
@property (nonatomic) BOOL hasDepartureFrequency;
@property (nonatomic) BOOL hasDistanceInMeters;
@property (nonatomic) BOOL hasEndingStopIndex;
@property (nonatomic, readonly) BOOL hasInstructions;
@property (nonatomic) BOOL hasListTransitIncidentMessageIndex;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) BOOL hasPrioritizeTilesPreloading;
@property (nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex;
@property (nonatomic) BOOL hasSignificanceForEndNode;
@property (nonatomic) BOOL hasStartingStopIndex;
@property (nonatomic) BOOL hasStartingTime;
@property (nonatomic) BOOL hasSteppingTransitIncidentMessageIndex;
@property (nonatomic, readonly) BOOL hasTransitIncidentMessage;
@property (nonatomic) BOOL hasWalkingIndex;
@property (nonatomic) BOOL hasZilchIndex;
@property (nonatomic, retain) GEOInstructionSet *instructions;
@property (nonatomic) unsigned int listTransitIncidentMessageIndex;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int maneuverType;
@property (nonatomic) BOOL prioritizeTilesPreloading;
@property (nonatomic, readonly) unsigned int*routeDetailsPrimaryArtworkIndexs;
@property (nonatomic, readonly) unsigned int routeDetailsPrimaryArtworkIndexsCount;
@property (nonatomic) unsigned int routeDetailsSecondaryArtworkIndex;
@property (nonatomic) int significanceForEndNode;
@property (nonatomic) unsigned int startingStopIndex;
@property (nonatomic) unsigned int startingTime;
@property (nonatomic, readonly) unsigned int*steppingArtworkIndexs;
@property (nonatomic, readonly) unsigned int steppingArtworkIndexsCount;
@property (nonatomic) unsigned int steppingTransitIncidentMessageIndex;
@property (nonatomic, retain) NSMutableArray *transferInfos;
@property (nonatomic, retain) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (nonatomic, retain) NSMutableArray *vehicleInfos;
@property (nonatomic) unsigned int walkingIndex;
@property (nonatomic) unsigned int zilchIndex;

- (unsigned int)accessPointZilchIndex;
- (void)addEnterExitInfo:(id)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)addTransferInfo:(id)arg1;
- (void)addVehicleInfo:(id)arg1;
- (id)arrivalInfo;
- (void)clearEnterExitInfos;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
- (void)clearSteppingArtworkIndexs;
- (void)clearTransferInfos;
- (void)clearVehicleInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)defaultVehicleInfoIndex;
- (unsigned int)departureFrequency;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceInMeters;
- (unsigned int)endingStopIndex;
- (id)enterExitInfoAtIndex:(unsigned int)arg1;
- (id)enterExitInfos;
- (unsigned int)enterExitInfosCount;
- (BOOL)hasAccessPointZilchIndex;
- (BOOL)hasArrivalInfo;
- (BOOL)hasDefaultVehicleInfoIndex;
- (BOOL)hasDepartureFrequency;
- (BOOL)hasDistanceInMeters;
- (BOOL)hasEndingStopIndex;
- (BOOL)hasInstructions;
- (BOOL)hasListTransitIncidentMessageIndex;
- (BOOL)hasLocation;
- (BOOL)hasManeuverType;
- (BOOL)hasPrioritizeTilesPreloading;
- (BOOL)hasRouteDetailsSecondaryArtworkIndex;
- (BOOL)hasSignificanceForEndNode;
- (BOOL)hasStartingStopIndex;
- (BOOL)hasStartingTime;
- (BOOL)hasSteppingTransitIncidentMessageIndex;
- (BOOL)hasTransitIncidentMessage;
- (BOOL)hasWalkingIndex;
- (BOOL)hasZilchIndex;
- (unsigned int)hash;
- (id)instructions;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)listTransitIncidentMessageIndex;
- (id)location;
- (int)maneuverType;
- (void)mergeFrom:(id)arg1;
- (BOOL)prioritizeTilesPreloading;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)routeDetailsPrimaryArtworkIndexs;
- (unsigned int)routeDetailsPrimaryArtworkIndexsCount;
- (unsigned int)routeDetailsSecondaryArtworkIndex;
- (void)setAccessPointZilchIndex:(unsigned int)arg1;
- (void)setArrivalInfo:(id)arg1;
- (void)setDefaultVehicleInfoIndex:(unsigned int)arg1;
- (void)setDepartureFrequency:(unsigned int)arg1;
- (void)setDistanceInMeters:(unsigned int)arg1;
- (void)setEndingStopIndex:(unsigned int)arg1;
- (void)setEnterExitInfos:(id)arg1;
- (void)setHasAccessPointZilchIndex:(BOOL)arg1;
- (void)setHasDefaultVehicleInfoIndex:(BOOL)arg1;
- (void)setHasDepartureFrequency:(BOOL)arg1;
- (void)setHasDistanceInMeters:(BOOL)arg1;
- (void)setHasEndingStopIndex:(BOOL)arg1;
- (void)setHasListTransitIncidentMessageIndex:(BOOL)arg1;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setHasPrioritizeTilesPreloading:(BOOL)arg1;
- (void)setHasRouteDetailsSecondaryArtworkIndex:(BOOL)arg1;
- (void)setHasSignificanceForEndNode:(BOOL)arg1;
- (void)setHasStartingStopIndex:(BOOL)arg1;
- (void)setHasStartingTime:(BOOL)arg1;
- (void)setHasSteppingTransitIncidentMessageIndex:(BOOL)arg1;
- (void)setHasWalkingIndex:(BOOL)arg1;
- (void)setHasZilchIndex:(BOOL)arg1;
- (void)setInstructions:(id)arg1;
- (void)setListTransitIncidentMessageIndex:(unsigned int)arg1;
- (void)setLocation:(id)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setPrioritizeTilesPreloading:(BOOL)arg1;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setRouteDetailsSecondaryArtworkIndex:(unsigned int)arg1;
- (void)setSignificanceForEndNode:(int)arg1;
- (void)setStartingStopIndex:(unsigned int)arg1;
- (void)setStartingTime:(unsigned int)arg1;
- (void)setSteppingArtworkIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setSteppingTransitIncidentMessageIndex:(unsigned int)arg1;
- (void)setTransferInfos:(id)arg1;
- (void)setTransitIncidentMessage:(id)arg1;
- (void)setVehicleInfos:(id)arg1;
- (void)setWalkingIndex:(unsigned int)arg1;
- (void)setZilchIndex:(unsigned int)arg1;
- (int)significanceForEndNode;
- (unsigned int)startingStopIndex;
- (unsigned int)startingTime;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)steppingArtworkIndexs;
- (unsigned int)steppingArtworkIndexsCount;
- (unsigned int)steppingTransitIncidentMessageIndex;
- (id)transferInfoAtIndex:(unsigned int)arg1;
- (id)transferInfos;
- (unsigned int)transferInfosCount;
- (id)transitIncidentMessage;
- (id)vehicleInfoAtIndex:(unsigned int)arg1;
- (id)vehicleInfos;
- (unsigned int)vehicleInfosCount;
- (unsigned int)walkingIndex;
- (void)writeTo:(id)arg1;
- (unsigned int)zilchIndex;

@end
