/* Generated by RuntimeBrowser.
 */

@protocol HKGraphSeriesBlockCoordinate <NSObject>

@required

- (id)copyWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)endXValue;
- (float)startXValue;
- (id)userInfo;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)yAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
