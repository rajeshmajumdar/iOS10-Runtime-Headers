/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKReverseGeocoder : NSObject {
    MKReverseGeocoderInternal * _internal;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic) <MKReverseGeocoderDelegate> *delegate;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=isQuerying, nonatomic, readonly) BOOL querying;

- (void).cxx_destruct;
- (void)_notifyError:(id)arg1;
- (void)_notifyNoResults;
- (void)_notifyResult:(id)arg1;
- (void)cancel;
- (struct { double x1; double x2; })coordinate;
- (id)delegate;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)isQuerying;
- (id)placemark;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
