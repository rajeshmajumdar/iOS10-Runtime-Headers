/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePath : MFPath {
    TSUBezierPath * m_path;
    int  m_state;
}

- (int)abort;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (int)begin;
- (int)closeFigure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (void)dealloc;
- (int)end;
- (int)fill:(id)arg1;
- (int)flatten;
- (id)getBezierPath;
- (id)init;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (BOOL)isOpen;
- (int)state;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;

@end
