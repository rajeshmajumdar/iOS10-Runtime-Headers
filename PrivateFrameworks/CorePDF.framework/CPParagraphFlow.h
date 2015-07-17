/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraphFlow : NSObject {
    BOOL  adjacentToCallout;
    int  calloutType;
    float  fBottom;
    float  fLeft;
    float  fRight;
    float  fTop;
    CPParagraph * nextInColumn;
    CPParagraph * paragraph;
    NSMutableArray * paragraphsAbove;
    NSMutableArray * paragraphsBelow;
    NSMutableArray * paragraphsLeft;
    NSMutableArray * paragraphsRight;
    BOOL  placed;
}

@property int calloutType;
@property float fBottom;
@property float fLeft;
@property float fRight;
@property (nonatomic) CPParagraph *nextInColumn;
@property (nonatomic, retain) CPParagraph *paragraph;
@property BOOL placed;

- (float)area;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })belowBounds;
- (id)belowTwoSides:(unsigned int)arg1;
- (int)calloutType;
- (float)dAbove;
- (float)dBelow;
- (void)dealloc;
- (id)description;
- (float)fBottom;
- (float)fLeft;
- (float)fRight;
- (id)ignoreCallouts:(unsigned int)arg1;
- (int)inOrder;
- (int)inOrder:(BOOL)arg1;
- (id)initWithParagraph:(id)arg1;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 paragraphs:(id)arg3;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 rects:(id)arg3;
- (BOOL)intervalOverlapTop:(float)arg1 bottom:(float)arg2 paragraphs:(id)arg3;
- (int)leftOrder;
- (id)nextInColumn;
- (id)nextParagraphInColumn:(id)arg1;
- (int)outOrder;
- (id)paragraph;
- (id)paragraphsAbove;
- (id)paragraphsBelow;
- (id)paragraphsLeft;
- (id)paragraphsRight;
- (BOOL)placed;
- (void)removeFromAbove:(id)arg1;
- (void)removeFromBelow:(id)arg1;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (int)rightOrder;
- (void)setCalloutType:(int)arg1;
- (void)setFBottom:(float)arg1;
- (void)setFLeft:(float)arg1;
- (void)setFRight:(float)arg1;
- (void)setNextInColumn:(id)arg1;
- (void)setParagraph:(id)arg1;
- (void)setParagraphsAboveIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (void)setPlaced:(BOOL)arg1;
- (id)simpleRule:(unsigned int)arg1;
- (int)topDescending:(id)arg1;
- (id)twoSides:(unsigned int)arg1;

@end
