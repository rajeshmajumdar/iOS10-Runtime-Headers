/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncident : NSObject <NSCopying> {
    NSString * _crossStreet;
    NSDate * _endDate;
    NSString * _info;
    BOOL  _isNotForDisplay;
    BOOL  _isOnSelectedRoute;
    NSDate * _lastUpdatedDate;
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    float  _maxZoom;
    float  _minZoom;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    unsigned int  _routeOffsetInMeters;
    int  _routeRelevance;
    int  _significance;
    NSDate * _startDate;
    NSString * _street;
    NSString * _subtitle;
    NSString * _title;
    int  _type;
    unsigned long long  _uniqueID;
    NSString * _uniqueString;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    }  _worldPoint;
}

@property (nonatomic, readonly) NSString *crossStreet;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *info;
@property (nonatomic, readonly) BOOL isNotForDisplay;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) float maxZoom;
@property (nonatomic, readonly) float minZoom;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) unsigned int routeOffsetInMeters;
@property (nonatomic) int routeRelevance;
@property (nonatomic, readonly) int significance;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *street;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) unsigned long long uniqueID;
@property (nonatomic, readonly) NSString *uniqueString;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (void)dealloc;
- (id)endDate;
- (BOOL)hasSameIdentifier:(id)arg1;
- (id)info;
- (id)initWithIncident:(id)arg1 vertices:(struct { int x1; int x2; }*)arg2 tileRect:(struct { double x1; double x2; double x3; double x4; })arg3 tileSize:(double)arg4;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; bool x13; int x14; unsigned char x15; unsigned char x16; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(int)arg2;
- (BOOL)isNotForDisplay;
- (BOOL)isOnSelectedRoute;
- (id)lastUpdatedDate;
- (float)maxZoom;
- (float)minZoom;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (unsigned int)routeOffsetInMeters;
- (int)routeRelevance;
- (void)setIsOnSelectedRoute:(BOOL)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteOffsetInMeters:(unsigned int)arg1;
- (void)setRouteRelevance:(int)arg1;
- (int)significance;
- (id)startDate;
- (id)street;
- (id)subtitle;
- (id)title;
- (int)type;
- (unsigned long long)uniqueID;
- (id)uniqueString;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;

@end
