/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapTransitLinkImpl : NSObject <GEOMapTransitLink> {
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::__1::allocator<GEOLocationCoordinate2D> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _coords;
    struct shared_ptr<geo::MapEdgeTransit> { 
        struct MapEdgeTransit {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _edge;
    GEOMapAccess * _map;
    <GEOMapTransitStop> * _stopFrom;
    <GEOMapTransitStop> * _stopTo;
}

@property (nonatomic, readonly) unsigned long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *internalLineName;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) unsigned int minimumTravelTime;
@property (nonatomic, readonly) <GEOMapTransitStop> *stopFrom;
@property (nonatomic, readonly) <GEOMapTransitStop> *stopTo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitLineID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (id)description;
- (double)distanceInMetersFrom:(struct { double x1; double x2; })arg1 outClosestCoordinateOnLine:(struct { double x1; double x2; }*)arg2;
- (id)initWithMap:(id)arg1 edge:(struct shared_ptr<geo::MapEdgeTransit> { struct MapEdgeTransit {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)internalLineName;
- (double)length;
- (unsigned int)minimumTravelTime;
- (id)stopFrom;
- (id)stopTo;
- (unsigned long long)transitLineID;

@end
