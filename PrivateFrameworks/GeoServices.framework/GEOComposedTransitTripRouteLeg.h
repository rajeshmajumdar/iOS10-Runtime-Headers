/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg {
    GEOComposedTransitTripRouteStep * _alightStep;
    GEOComposedTransitTripRouteStep * _boardStep;
    unsigned int  _numberOfTransitStops;
    unsigned int  _vehicleIndex;
}

@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *alightStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *boardStep;
@property (nonatomic, readonly) double departureFrequencyMax;
@property (nonatomic, readonly) double departureFrequencyMin;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) NSDate *lastStepArrivalDate;
@property (nonatomic, readonly) NSDate *latestDepartureTime;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *routeLineArtwork;
@property (nonatomic, readonly) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) <GEOTransitSystem> *transitSystem;
@property (nonatomic, readonly) unsigned int vehicleCount;
@property (nonatomic) unsigned int vehicleIndex;

- (void)_cacheStepData;
- (id)alightStep;
- (id)boardStep;
- (double)departureFrequencyMax;
- (double)departureFrequencyMin;
- (id)departureTime;
- (id)departureTimeZone;
- (id)departureTimes;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 transitStepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)lastStepArrivalDate;
- (id)latestDepartureTime;
- (unsigned int)numberOfTransitStops;
- (id)routeDetailsPrimaryArtworkForVehicle:(unsigned int)arg1;
- (id)routeDetailsSecondaryArtworkForVehicle:(unsigned int)arg1;
- (id)routeLineArtwork;
- (void)setVehicleIndex:(unsigned int)arg1;
- (id)steppingArtworkForVehicle:(unsigned int)arg1;
- (id)transitLine;
- (id)transitSystem;
- (unsigned int)vehicleCount;
- (unsigned int)vehicleIndex;

@end
