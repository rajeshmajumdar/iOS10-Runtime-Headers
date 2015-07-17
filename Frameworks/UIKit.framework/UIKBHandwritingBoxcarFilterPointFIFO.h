/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {
    NSMutableArray * _prevPoints;
    unsigned int  _width;
}

@property (nonatomic, retain) NSMutableArray *prevPoints;
@property (nonatomic) unsigned int width;

- (void)addPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (void)clear;
- (void)dealloc;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned int)arg2;
- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end
