/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerFeatureHandle : NSObject {
    int  _featureIndex;
    int  _featureType;
    GEOFeatureStyleAttributes * _styleAttributes;
    int  _tileStyle;
    unsigned int  _tileVersion;
    int  _tileX;
    int  _tileY;
    int  _tileZ;
}

- (void)dealloc;
- (int)featureIndex;
- (int)featureType;
- (id)initWithFeature:(struct { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; }*)arg1 featureType:(int)arg2;
- (id)styleAttributes;
- (int)tileStyle;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end
