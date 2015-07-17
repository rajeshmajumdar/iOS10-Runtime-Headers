/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAxisStyle : NSObject <NSCopying> {
    unsigned int  _axisLabelPosition;
    HKStrokeStyle * _axisLineStyle;
    float  _fillPadding;
    HKFillStyle * _fillStyle;
    HKStrokeStyle * _gridLineStyle;
    HKAxisLabelStyle * _labelStyle;
    BOOL  _showGridLines;
    unsigned int  _tickPositions;
    HKTickStyle * _tickStyle;
}

@property (nonatomic) unsigned int axisLabelPosition;
@property (nonatomic, retain) HKStrokeStyle *axisLineStyle;
@property (nonatomic) float fillPadding;
@property (nonatomic, retain) HKFillStyle *fillStyle;
@property (nonatomic, retain) HKStrokeStyle *gridLineStyle;
@property (nonatomic, retain) HKAxisLabelStyle *labelStyle;
@property (nonatomic) BOOL showGridLines;
@property (nonatomic) unsigned int tickPositions;
@property (nonatomic, retain) HKTickStyle *tickStyle;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (unsigned int)axisLabelPosition;
- (id)axisLineStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)fillPadding;
- (id)fillStyle;
- (id)gridLineStyle;
- (id)labelStyle;
- (void)setAxisLabelPosition:(unsigned int)arg1;
- (void)setAxisLineStyle:(id)arg1;
- (void)setFillPadding:(float)arg1;
- (void)setFillStyle:(id)arg1;
- (void)setGridLineStyle:(id)arg1;
- (void)setLabelStyle:(id)arg1;
- (void)setShowGridLines:(BOOL)arg1;
- (void)setTickPositions:(unsigned int)arg1;
- (void)setTickStyle:(id)arg1;
- (BOOL)showGridLines;
- (unsigned int)tickPositions;
- (id)tickStyle;

@end
