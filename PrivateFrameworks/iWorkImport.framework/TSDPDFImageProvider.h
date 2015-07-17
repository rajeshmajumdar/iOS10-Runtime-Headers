/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPDFImageProvider : TSDImageProvider {
    struct CGSize { 
        float width; 
        float height; 
    }  mNaturalSize;
    struct CGPDFDocument { } * mPDFDocument;
}

- (struct CGPDFDocument { }*)CGPDFDocument;
- (void)dealloc;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)flush;
- (BOOL)hasFlushableContent;
- (BOOL)isValid;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct CGPDFDocument { }*)p_load;
- (void)p_loadIfNecessary;
- (int)pageAngle;

@end
