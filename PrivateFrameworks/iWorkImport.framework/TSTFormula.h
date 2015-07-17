/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormula : NSObject <NSCopying> {
    TSCECalculationEngine * mCalculationEngine;
    BOOL  mEmpty;
    TSTExpressionNode * mExpressionTree;
    BOOL  mFixupFormulas;
    BOOL  mFormulaFixupsShouldStick;
    BOOL  mFormulaWasFixable;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mHostCell;
    TSTTableInfo * mHostInfo;
    NSString * mInitialWhitespace;
    BOOL  mSyntaxError;
}

@property (nonatomic, retain) TSCECalculationEngine *calculationEngine;
@property (getter=isEmpty, nonatomic) BOOL empty;
@property (nonatomic, retain) TSTExpressionNode *expressionTree;
@property (nonatomic) BOOL fixupFormulas;
@property (nonatomic, readonly) struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_5_1_1; } x5; } formula;
@property (nonatomic, readonly) BOOL formulaFixupsShouldStick;
@property (nonatomic, readonly) BOOL formulaWasFixable;
@property (nonatomic, copy) NSString *initialWhitespace;
@property (getter=isSyntaxError, nonatomic) BOOL syntaxError;

+ (id)doubleQuoteCharacters;
+ (id)equalsCharacters;
+ (id)formulaForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 inTable:(id)arg3;
+ (int)formulaQuoteContextAtCharIndex:(unsigned int)arg1 inStorage:(id)arg2;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)leftParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned int)parenCountAtCharIndex:(unsigned int)arg1 inStorage:(id)arg2;
+ (unsigned int)parenCountAtCharIndex:(unsigned int)arg1 unmatchedParenCount:(unsigned int)arg2 quoteContext:(int)arg3 inStorage:(id)arg4;
+ (int)quoteContextAtCharIndex:(unsigned int)arg1 previousContext:(int)arg2 inStorage:(id)arg3;
+ (id)rightParenCharacters;
+ (id)singleQuoteCharacters;

- (id)calculationEngine;
- (BOOL)canSimplify;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)expressionTree;
- (BOOL)fixupFormulas;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_5_1_1; } x5; })formula;
- (id)formulaDetokenizedText;
- (BOOL)formulaFixupsShouldStick;
- (id)formulaPlainText;
- (BOOL)formulaWasFixable;
- (BOOL)hasBareArgumentPlaceholders;
- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 hostTable:(id)arg4;
- (id)initWithCalculationEngine:(id)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 hostTable:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 TSCEFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_5_1_1; } x5; }*)arg4 ownerID:(struct __CFUUID { }*)arg5;
- (id)initialWhitespace;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isEmpty;
- (BOOL)isSyntaxError;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)p_fixFormula:(id)arg1;
- (id)p_formulaAsTextReturningTokenValues:(BOOL)arg1;
- (void)reparseWithStorage:(id)arg1;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(id /* block */)arg2;
- (void)reset;
- (void)setCalculationEngine:(id)arg1;
- (void)setEmpty:(BOOL)arg1;
- (void)setExpressionTree:(id)arg1;
- (void)setFixupFormulas:(BOOL)arg1;
- (void)setInitialWhitespace:(id)arg1;
- (void)setSyntaxError:(BOOL)arg1;
- (id)simplify;

@end
