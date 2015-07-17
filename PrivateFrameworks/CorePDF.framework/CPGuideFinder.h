/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGuideFinder : NSObject <CPDisposable> {
    double * anchorArray;
    CPCluster * anchors;
    CPZone * contentZone;
    unsigned int  countOfWordsInZone;
    struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; } * crossingWordArray;
    NSMutableArray * gutters;
    NSMutableArray * leftGuides;
    float  medianFontSizeOfFirstCharacter;
    float  medianFontSizeOfLastCharacter;
    NSMutableArray * rightGuides;
    double * rightHandSideArray;
    CPCluster * rightHandSides;
}

+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;

- (BOOL)addStripTo:(id)arg1 bottom:(float)arg2 left:(float)arg3 top:(float)arg4 right:(float)arg5;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)getWordEdges;
- (id)gutters;
- (BOOL)hasGutters;
- (BOOL)hasLeftGuides;
- (BOOL)hasRightGuides;
- (id)initWithContentZone:(id)arg1;
- (id)leftGuides;
- (void)markTextLines;
- (float)medianFontSizeOfFirstCharacter;
- (float)medianFontSizeOfLastCharacter;
- (id)rightGuides;
- (void)setAlignForWordWithExtent:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (void)splitTextLines;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg4 ofCount:(unsigned int)arg5 crossedBy:(struct { float x1; float x2; float x3; float x4; int x5; int *x6; struct CPPDFStyle {} *x7; }*)arg6 ofCount:(unsigned int)arg7;

@end
